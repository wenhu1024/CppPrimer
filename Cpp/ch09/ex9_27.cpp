#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl{0,1,2,3,4,5,6,7,8,9};
    auto cur=fl.begin();
    auto pre=fl.before_begin();

    while(cur!=fl.end()){
        if(*cur%2==1){
            cur=fl.erase_after(pre);
        }else{
            pre=cur;
            ++cur;
        }
    }
    for(auto e:fl){
        cout<<e<<endl;
    }
    return 0;
}