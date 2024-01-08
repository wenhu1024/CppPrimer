#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::vector;
using std::string;
int main()
{
    string s;
    vector<string> str;
    while(cin>>s){
        str.push_back(s);
    }

    return 0;
}