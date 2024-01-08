#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<string> lis;
    vector<string> vec{"123","123","12","12","12344"};
    unique_copy(vec.begin(),vec.end(),inserter(lis,lis.begin()));
    for(auto e:lis){cout << e << endl;}
    return 0;
}
