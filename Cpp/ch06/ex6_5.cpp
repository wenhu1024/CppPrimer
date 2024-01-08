#include <iostream>

using std::cin;using std::cout;using std::endl;

int f(int n){
    if(n>=0){
        return n;
    }     
    else{
        return -n;
    }    
}
int main()
{
    int n,res;
    cin>>n;
    res=f(n);
    cout<<res<<endl;
    return 0;
}