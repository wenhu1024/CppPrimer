#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class QueryResult;
class TextQuery{
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream &in):file(new vector<string>){
        string text;
        while(getline(in,text)){
            file->push_back(text);
            auto n=file->size()-1;
            istringstream ss(text);
            string word;
            while(ss>>word){
                auto &lines=wm[word];
                if(!lines){
                    lines.reset(new set<line_no>);
                }
                lines->insert(n);
            }
        }
    }
    QueryResult query(const string &s);
 
private:
    shared_ptr<vector<string>> file;
    map<string,shared_ptr<set<line_no>>> wm;
};

class QueryResult{
public:
        friend ostream &print(ostream &os,const QueryResult &qr);
    	QueryResult(std::string s,
				std::shared_ptr<std::set<TextQuery::line_no>> p,
				std::shared_ptr<std::vector<std::string>> f) :
		sought(s), lines(p), file(f) {}	    

private:
    shared_ptr<vector<string>> file;
    shared_ptr<set<TextQuery::line_no>> lines;
    string sought;
};

QueryResult TextQuery::query(const string &s){
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto p=wm.find(s);
    if(p!=wm.end()){
         return QueryResult(s,p->second,file);
    }else{
        return QueryResult(s,nodata,file);
    }
}

ostream &print(ostream &os,const QueryResult &qr){
    os << qr.sought << " occurs " << qr.lines->size() << 
        (qr.lines->size()>1 ? "times" : "time") << endl;
    for(auto e:*qr.lines){
        os << "\t(line " << e + 1 << ") " << *(qr.file->begin()+e) << endl;
    }
    return os;
}

void runQueries(ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(cin >> s) || s == "q") break;
		print(cout, tq.query(s)) << endl;
	}
}
int main()
{
    ifstream ifs("letter.txt");
	runQueries(ifs);
	return 0;
}