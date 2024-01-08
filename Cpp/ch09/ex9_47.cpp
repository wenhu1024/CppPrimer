#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("ab2c3d7R4E6");
    string num("0123456789");
    string::size_type pos=0;
    while((pos=str.find_first_of(num,pos))!=string::npos){
        cout<<str[pos]<<" ";
        ++pos;
    }
    cout<<endl;
    string::size_type pos1=0;
    while((pos1=str.find_first_not_of(num,pos1))!=string::npos){
        cout<<str[pos1]<<" ";
        ++pos1;
    }
    return 0;
}