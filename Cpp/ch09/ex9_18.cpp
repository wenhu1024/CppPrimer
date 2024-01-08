#include <iostream>
#include <string>
#include <deque>


using namespace std;

int main()
{
    string s;
    deque<string> dq;
    while (cin>>s){
        dq.push_back(s);
    }
    
    for(auto beg=dq.begin();beg!=dq.end();++beg){
        cout << *beg << endl;
    }
    return 0;
}