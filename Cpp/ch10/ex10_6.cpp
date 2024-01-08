#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1,2,3};
    fill_n(vec.begin(),vec.size(),0);
    for(auto e:vec){
        cout << e << endl;
    }
    return 0;
}