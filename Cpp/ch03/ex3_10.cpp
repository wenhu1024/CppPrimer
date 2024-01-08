#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    getline(cin,s);
    for(auto c:s){
        if(!ispunct(c)){
            cout << c;
        }
    }
    cout << endl;
    return 0;
}