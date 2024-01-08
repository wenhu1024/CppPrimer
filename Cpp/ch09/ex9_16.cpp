#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
    vector<int> lis1{1,2,3,4};
    vector<int> vec2{1,2,3,4};

    cout<<(vector<int>(lis1.begin(),lis1.end())==vec2)<<endl;
    return 0;
}