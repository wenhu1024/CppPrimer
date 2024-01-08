#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    
    string word;
    vector<string> words;
    while(cin>>word){
        words.push_back(word);
    }
    for(auto &e:words){
        for(auto &c:e){
            c=toupper(c);
        }
    }
    for(auto q:words){
        cout << q << endl;
    }
    return 0;
}
