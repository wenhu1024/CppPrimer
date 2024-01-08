#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    map<string,vector<int>> m  = {{"cpp",{1,2,3}}};
    auto p=m.find("cpp");
    for(auto e:p->second){
        cout << e << " ";
    }
    return 0;
}