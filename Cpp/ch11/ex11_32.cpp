#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
    multimap<string,string> m{
        { "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };

    map<string,set<string>> res;
    
    for(const auto &e:m){
        res[e.first].insert(e.second);
    }

    for(const auto &e:res ){
        cout << e.first << ": " ;
        for(const auto&c:e.second){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}