#include <iostream>

using namespace std;

int main()
{   int sz=1;
    auto f = [sz] (int a)->int{return a+sz;};
    cout << f(2) << endl;
    return 0;
    
}

