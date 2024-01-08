#include <iostream>

using std::cin;using std::cout;using std::endl;

void f(int *p1,int *p2){
    int t=*p1;
    *p1=*p2;
    *p2=t;  
}
int main()
{
    int n1=1,n2=2;
    cout<<n1<<","<<n2<<endl;
    f(&n1,&n2);
    cout<<n1<<","<<n2<<endl;
    return 0;
}