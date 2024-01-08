#include <iostream>
#include <vector>

using std::cin;using std::cout;using std::endl;using std::vector;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main()
{   
    vector<int (*)(int,int)> ff{add,subtract,multiply,divide};
    for(auto f:ff){
        cout<<f(4,2)<<"\t";
    }
    return 0;
}