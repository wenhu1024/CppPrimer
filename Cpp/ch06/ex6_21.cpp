#include <iostream>

using std::cin;using std::cout;using std::endl;

int f(int n1, const int * p){
    return n1>*p? n1 : *p;   
}

int main()
{   
    int n1,n2;
    cin>>n1>>n2;
    cout<<f(n1,&n2)<<endl;
    return 0;
}