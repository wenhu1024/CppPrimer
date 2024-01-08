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
    int a[5]={1,2,3,4,5};
    vector<int> v(begin(a),end(a));
    for(auto c:v){
        cout << c << "  ";
    }

    return 0;
}