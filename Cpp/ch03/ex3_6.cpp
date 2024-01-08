#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("Cpp");
    for(auto &c:s){
        c='X';
    }
    cout << s << endl;
    return 0;
}
