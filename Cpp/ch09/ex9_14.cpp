#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
    list<const char*> lis{"c","p","p"};
    vector<string> vec(lis.begin(),lis.end());
    for(auto e:vec){
        cout<<e<<endl;
    }
    return 0;
}