#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,size_t> word_count;
    string word;
    while(cin>>word){
        auto p = word_count.insert({word,1});
        if(!p.second){
            ++p.first->second;
        }
    }
    for(auto e:word_count){
        cout << e.first << ": " << e.second << endl;
    }
    return 0;
}