#include <iostream>

using namespace std;

int main()
{
    auto f = [] (int a,int b)->int{return a+b;};
    cout << f(1,2) << endl;
    return 0;
}