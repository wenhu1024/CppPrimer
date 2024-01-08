#include <iostream>
#include <vector>
using std::cin;using std::cout;using std::endl;
using std::vector;
int main()
{
    vector<int> n{1,2,3,4};
    for(auto &num:n){
        cout<<(num%2==1 ? num*=2 : num);
    }
    return 0;
}