#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<string,string> fa;
    string ln, fn;

    while(cin >> ln >> fn){
        fa.emplace(ln,fn);
    }
    for(auto e:fa){
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}