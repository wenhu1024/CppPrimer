#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int num;
    while(cin>>num){
        vec.push_back(num);
    }
    auto cnt=count(vec.begin(),vec.end(),5);
    cout << cnt << endl;
    return 0;
}
