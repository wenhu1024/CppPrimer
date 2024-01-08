#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> v{"123456","123","123456789","12345678"};
    auto cnt=count_if(v.begin(),v.end(),[](const string &s){return s.size() > 6;});
    cout << cnt << endl;
    return 0;
}
