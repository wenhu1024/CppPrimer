#include <iostream>
#include <string>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1="cpp";
    string s2="Cpp";

    char str1[] = "cpp";
    char str2[] = "cpp";

    if(s1==s2){
        cout << "same" << endl;
    }else{
        cout << "not same" << endl;
    }

    cout << "*******" << endl;

    if(0==strcmp(str1,str2)){
        cout << "same" << endl;
    }else{
        cout << "not same" << endl;
    }
    return 0;
}