#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string,list<int>> m;
    int line;

    for(string word ; cout << "word:\n" ,cin >> word && word!="q";){
        for(int line; cout << "line:\n" ,cin >> line && line!=-1;){
            m[word].push_back(line);
        }
    }
    cout << "______" << endl;
    for(auto e:m){
        cout << "word:\n" << e.first << endl;
        cout << "line:\n" ;
        for(auto i:e.second){
            cout << i << endl;
        }
    }

    return 0;
}