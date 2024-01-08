#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

using namespace std;

int main()
{
    list<int> lis1,lis2,lis3;
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    copy(vec.begin(),vec.end(),back_inserter(lis1));
    for(auto e:lis1){cout << e << " ";}
    cout<<endl;
    copy(vec.begin(),vec.end(),front_inserter(lis2));
    for(auto e:lis2){cout << e << " ";}
    cout<<endl;
    copy(vec.begin(),vec.end(),inserter(lis3,lis3.begin()));
    for(auto e:lis3){cout << e << " ";}
    cout<<endl;
    return 0;
}
