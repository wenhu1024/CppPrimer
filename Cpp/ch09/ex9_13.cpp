#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> lis(10,2);
    vector<double> vec(lis.begin(),lis.end());
    for(auto e:vec){
        cout<<e<<endl;
    }
    return 0;
}