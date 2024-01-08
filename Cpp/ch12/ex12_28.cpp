#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <set>
#include <cctype>

using namespace std;

int main()
{
    ifstream in("letter.txt");
    if(!in){
        cout << "no letter?" << endl;
        return -1;
    }

    vector<string> vec;
    map<string,set<vector<string>::size_type>> m;
    vector<string>::size_type lno=0;

    for(string line;getline(in,line);++lno){
        vec.push_back(line);
        istringstream ss(line);
        for(string text,word;ss>>text;word.clear()){
            remove_copy_if(text.begin(),text.end(),back_inserter(word),[](char c){return ispunct(c);});
            m[word].insert(lno);
        }
    }

    while(true){
        cout << "enter word to look for, or q to quit: " << endl;
        string s;
        if(!(cin >> s) || s=="q"){
            break;
        }
        auto p=m.find(s);
        if(p!=m.end()){
            cout << s << " occurs " << p->second.size() << (p->second.size() >1 ? " times " : " time ") << endl;
            for(const auto &e:p->second){
                cout << "(line " << e+1 << ") " << vec[e] << endl;
            }
        }else{
            cout << "not exist"<<endl;
        }

    }
    return 0;
}
