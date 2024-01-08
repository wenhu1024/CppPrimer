#include <iostream>

using std::cin;using std::cout;using std::endl;

int fact(int n){
    int ans=1;
    while(n>1){
        ans*=n--;
    }
    return ans;
}
int main()
{
    int n,res;
    cin>>n;
    res=fact(n);
    cout<<res<<endl;
    return 0;
}