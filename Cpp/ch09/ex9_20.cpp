#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace std;

int main()
{
    int num;
    list<int> lis;
    deque<int> dq1;
    deque<int> dq2;

    while (cin>>num){
        lis.push_back(num);
        if(num&1==1){
            dq1.push_back(num);
        }else{
            dq2.push_back(num);
        }
    }
    
    for(auto beg=lis.begin();beg!=lis.end();++beg){
        cout << *beg << endl;
    }
    cout<<"__________________\n";
    for(auto e:dq1){cout<<e<<endl;}
    cout<<"__________________\n";
    for(auto e:dq2){cout<<e<<endl;}
    return 0;
}
