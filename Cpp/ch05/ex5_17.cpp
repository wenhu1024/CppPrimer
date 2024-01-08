#include <iostream>
#include <vector>

using std::cin;using std::cout;using std::endl;using std::vector;

bool is_pre(const vector<int> &n1,const vector<int> &n2){
    bool t1=n1.size()<n2.size();
    bool t2=true;
    for(decltype(n1.size()) i=0;i!=n1.size();i++){
        if(n1[i]!=n2[i]){
            t2=false;
            break;
        }
    }
    return t1&&t2;
}

int main()
{
    vector<int> n1{0,1,1,2};
    vector<int> n2{0,1,1,2,3,5,8};
    cout<<is_pre(n1,n2)<<endl;
    return 0;
}