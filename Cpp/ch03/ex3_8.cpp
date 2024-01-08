#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // string s("Cpp");
    // for(auto &c:s){
    //     c='X';
    // }
    // cout << s << endl;

    string s0("Cpp");
    for(decltype(s0.size()) index = 0; index !=s0.size(); ++index){
        s0[index] = 'X';
    }
    cout << s0 << endl;

    string s1("Cpp");
    decltype(s1.size()) i=0;
    while(i!=s1.size()){
        s1[i] = 'X';
        i++;
    }
    cout << s1 << endl;
    return 0;
}

 