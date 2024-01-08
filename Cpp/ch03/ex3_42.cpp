#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

int main()
{
    int a[5];
    vector<int> v{1,2,3,4,5};
    for(int i=0;i!=(end(a)-begin(a));++i){
        a[i]=v[i];
    }
    for(auto c:a){
        cout << c << "  ";
    }
    return 0;
}