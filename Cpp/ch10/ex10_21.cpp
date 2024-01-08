#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a=3;
    auto f = [&a]()mutable->bool
            {if(a!=0) {--a; return false;}return true;};
    while(!f()){
        cout << a << endl;
    }
    return 0;
}