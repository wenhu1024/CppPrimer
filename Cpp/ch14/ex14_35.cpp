#include <iostream>
#include <string>

using namespace std;

class PrintString{
public:
    PrintString(istream &s=cin):is(s){}
    string operator()(){
        string str;
        getline(is,str);
        return is ? str : string(); 
    }
private:
    istream &is;
};