#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

void word_count(){
    unordered_map<string,size_t> word_count;
    string word;
    while(cin >> word){
        ++word_count[word];
    } 
    for(const auto &e:word_count){
        cout << e.first << ": " << e.second << endl;
    }
}

unordered_map<string,string> buildMap(ifstream &r_if){
    unordered_map<string,string> trans_map;
    string key;
    string value;
    while(r_if >> key && getline(r_if,value)){
        if(value.size()>1){
            trans_map[key] = value.substr(1);
        }else{
            throw runtime_error("no rule for "+key);
        }
    }
    return trans_map;
}
void word_transform(ifstream &r_if,istream &g_if){
    auto trans_map=buildMap(r_if);
    string text;
    string word;
    while(getline(g_if,text)){
        istringstream s(text);
        bool isFirst=true;
        while(s >> word){
            if(isFirst){
                isFirst=false;
            }else{
                cout << " ";
            }
            auto p=trans_map.find(word);
            if(p!=trans_map.end()){
                cout << p->second;
            }else{
                cout << word;
            }
        } 
        cout << endl;
    }
}
int main()
{
    //word_count();
    ifstream g("given.md"),r("rule.md");
    if(g && r){
        word_transform(r,g);
    }else{
        cout << "no documents\n";
    }
    return 0;
}