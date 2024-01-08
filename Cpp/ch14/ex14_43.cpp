#include <iostream>
#include <vector>
#include <functional>

using namespace std;


int main()
{
    vector<int> vec{2,4};
    modulus<int> mod;
    int in;
    cin>>in;
    auto predicator=[&](int i){return 0==mod(in,i);};
    auto is_divisible=any_of(vec.cbegin(),vec.cend(),predicator);
    cout << (is_divisible ? "yes" : "no") << endl;
    return 0;
}