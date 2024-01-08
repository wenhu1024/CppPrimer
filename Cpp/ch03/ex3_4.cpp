#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str0,str1 ;
    cin >> str0 >> str1;
    if(str0==str1){
        cout << "same content" << endl;
    }else{
        if(str0 > str1){
            cout << str0 << endl;
        }else{
            cout << str1 << endl;
        }
    }
    cout << "****************" << endl;

    if(str0.size()==str1.size()){
        cout << "same length" << endl; 
    }else{
        if(str0.size() > str1.size()){
            cout << str0 << endl;
        }else{
            cout << str1 << endl;
        }
    }

    return 0;
}