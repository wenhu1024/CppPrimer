#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str0 ;
    while(getline(cin,str0)){
        cout << str0 << endl;
    }
    return 0;
}
// while(cin >> str0){
//     cout << str0 << endl;
// }