#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};
    vector<int>::reverse_iterator it1=vec.rbegin()+2;
    vector<int>::reverse_iterator it2=vec.rend()-3;
    for(auto p=it1;p!=it2;++p){
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}