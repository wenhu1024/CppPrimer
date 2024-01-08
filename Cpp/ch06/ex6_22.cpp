#include <iostream>

using std::cin;using std::cout;using std::endl;

void f(int * &p1, int * &p2){
	auto p3=p1;
	p1=p2;
	p2=p3;
}

int main()
{   
    int n1,n2;
    int *p1=&n1;
    int *p2=&n2;
    cin>>n1>>n2;
    f(p1,p2);
    cout<<*p1<<" "<<*p2<<endl;
    return 0;
}
