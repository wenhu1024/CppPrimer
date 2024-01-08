#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> vec(begin(ia),end(ia));
    list<int> lis(vec.begin(),vec.end());
    for(auto beg=vec.begin();beg!=vec.end();){
        if((*beg&1)==0){
            auto p=beg;
            cout<<"&"<<*p<<" ";
            beg=vec.erase(beg);  
            cout<<"*"<<*p<<" ";    
        }else{
            beg++;
        }
    }
    for(auto beg=lis.begin();beg!=lis.end();){
        if((*beg&1)==1){
            beg=lis.erase(beg);
        }else{
            ++beg;
        }
    }

    for(auto e:vec){
        cout<<e<<" ";
    }
    cout<<endl;

    for(auto e:lis){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}