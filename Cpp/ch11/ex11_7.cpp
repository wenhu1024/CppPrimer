#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string,vector<string>> m;
    for(string ln; cout << "Last name:\n" , cin >> ln && ln !="q" ;){
        for(string fn; cout << "children's names:\n", cin >> fn && fn != "q";){
            m[ln].push_back(fn);
        }      
    }
    cout << "_________" << endl;
    for(auto e:m){
        cout << "Last name:\n" << e.first << endl;
        cout << "children's names:\n";
        for(auto s:e.second){
            cout << s << endl;
        }
    }
    return 0;
}