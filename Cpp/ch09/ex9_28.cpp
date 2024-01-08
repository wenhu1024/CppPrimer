#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void find_insert(forward_list<string> &fl,const string &s1,const string &s2){
    auto cur=fl.begin();
    auto pre = fl.before_begin();

    while(cur!=fl.end()){
        if(*cur==s1){
            fl.insert_after(cur,s2);
            return;
        }else{
            pre=cur;
            ++cur;
        }
    } 
    fl.insert_after(pre,s2);
}
int main()
{
    forward_list<string> fl1{"c","cp","cpp"};
    forward_list<string> fl2{"oop","cp","c++"};
    find_insert(fl1,"cp","123");
    find_insert(fl2,"cpp","cpp");
    for(auto e:fl1){
        cout<<e<<endl;
    }
    cout<<"_______"<<endl;
    for(auto e:fl2){
        cout<<e<<endl;
    }
    return 0;
}