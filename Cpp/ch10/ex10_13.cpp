#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool not_less_five(const string &s){
    return s.size() >= 5;
} 

int main()
{
    vector<string> vec{"123","1","12","12345","123456","1234567"};
    auto it=partition(vec.begin(),vec.end(),not_less_five);
    for(auto beg=vec.begin();beg!=it;++beg){
        cout << *beg << endl;
    }
    return 0;
}