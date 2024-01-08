#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::iterator;

int main()
{
    vector<int> v(10,1);
    for(auto it = v.begin();it!=v.end();++it){
        *it*=2;
        cout << *it <<"\t";
    }

    return 0;
}