#include <iostream>

using std::cin;using std::cout;using std::endl;

void f(int &n1,int &n2){
    int t=n1;
    n1=n2;
    n2=t;
}

int main()
{   
    int n1=1,n2=2;
    cout<<n1<<","<<n2<<endl;
    f(n1,n2);
    cout<<n1<<","<<n2<<endl;
    return 0;
}