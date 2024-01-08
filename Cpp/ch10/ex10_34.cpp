#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    vector<string> vec{"1","12","123","1234"};
    for(vector<string>::const_reverse_iterator r_beg = vec.crbegin(); r_beg != vec.crend(); ++r_beg){
        cout << *r_beg << " ";
    }
    cout << endl;
    return 0;
}