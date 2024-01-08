#include <iostream>
#include <string>
#include <list>


using namespace std;

int main()
{
    string s;
    list<string> lis;
    while (cin>>s){
        lis.push_back(s);
    }
    
    for(auto beg=lis.begin();beg!=lis.end();++beg){
        cout << *beg << endl;
    }
    return 0;
}
