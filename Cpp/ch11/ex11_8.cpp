#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> word;
    string s;
    bool t;
    while(cin >> s){
        t=true;
        for(auto e:word){
            if(e==s){
                t=false;
                break;
            }
        }
        if(t){
            word.push_back(s);
        }
    }
    cout << "________" << endl;
    for(auto e:word){
        cout << e << " ";
    }
    cout << endl;
    return 0;
}