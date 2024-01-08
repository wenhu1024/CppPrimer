#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> v{'c','p','p'};
    string s(v.begin(),v.end());
    cout<<s<<endl;
    return 0;
}