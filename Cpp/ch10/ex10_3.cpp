#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
    vector<int> vec{1,2,3};
    int sum=accumulate(vec.cbegin(),vec.cend(),0);
    cout << sum << endl;
    return 0;
}