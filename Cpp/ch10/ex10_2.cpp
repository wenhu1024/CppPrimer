#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    list<string> lis;
    string num;
    while(cin>>num){
        lis.push_back(num);
    }
    auto cnt=count(lis.begin(),lis.end(),"cpp");
    cout << cnt << endl;
    return 0;
}
