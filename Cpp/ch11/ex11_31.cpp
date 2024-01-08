#include <iostream>
#include <map>
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

    string author = "pezy";
	string work = "CP5"; 
    auto p = m.find(author);
    auto cnt=m.count(author); 
    while(cnt!=0){
        if(p->first==work){
            m.erase(p);
        }
        ++p;
        --cnt;
    }

    for(const auto &e:res ){
        cout << e.first << endl;
    }
    return 0;
}