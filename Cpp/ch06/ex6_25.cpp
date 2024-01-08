#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;



int main(int argc,char **argv)
{   
    string str;
    for(size_t i=1;i!=argc;++i){
        str+=string(argv[i])+" ";
    }
    cout<<argc<<endl;
    cout<<str<<endl;
    return 0;
}