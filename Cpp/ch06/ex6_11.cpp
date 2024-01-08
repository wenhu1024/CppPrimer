#include <iostream>

using std::cin;using std::cout;using std::endl;

void reset(int &n){
    n=0;
}
int main()
{
    int num;
    cin>>num;
    reset(num);
    cout<<num<<endl;
    return 0;
}