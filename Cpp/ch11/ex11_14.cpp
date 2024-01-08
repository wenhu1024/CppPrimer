#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>

using namespace std;

int main()
{
    map<string,vector<pair<string,string>>> m;
    for(string ln; cout << "Last name:\n", cin >> ln && ln != "q";){
        for(string fn,bir; cout << "Children's names && Birthday:\n",cin >> fn >> bir && fn != "q"&&bir!="q";){
             m[ln].push_back(pair<string,string>(fn,bir));
        }
    }
    cout << "_______" << endl;
    for(auto e:m){
        cout << "Last name:" << e.first << endl;
        cout << "Children's names && Birthday:" << endl;
        for(auto e:e.second){
            cout << e.first << " " << e.second << endl;
        }
    }

    return 0;
}