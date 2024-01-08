#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check6(const string &s,string::size_type sz){
    return s.size() <= sz;
}

int main()
{
    vector<string> v{"123456","123","123456789","12345678"};
    auto cnt=count_if(v.begin(),v.end(),bind(check6,_1,6));
    cout << cnt << endl;
    return 0;
}
