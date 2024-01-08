#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

map<string,string> buildMap(ifstream &rule_if){
    string key;
    string value;
    map<string,string> trans_map;
    while(rule_if >> key && getline(rule_if,value)){
        if(value.size() > 1){
            trans_map[key]=value.substr(1);
        }else{
            throw runtime_error("no rule for " + key);
        }
    }
    return trans_map;
}

void word_transform(ifstream &rule_if,ifstream &given_if){
    auto trans_map = buildMap(rule_if);
    string text;
    while(getline(given_if,text)){
        istringstream s(text);
        string word;
        bool isFirst=true;
        while(s >> word){
            if(isFirst){
                isFirst = false;
            }else{
                cout << " " ;
            }
            auto p=trans_map.find(word);
            if(p==trans_map.end()){
                cout << word;
            }else{
                cout << p->second;
            }
        }
        cout << endl;
    }
}
int main()
{   
    ifstream g("given.md"),r("rule.md");
    if(g && r){
        word_transform(r,g);
    }    
    else{
        cout << "no documents\n";
    }
    return 0;
}