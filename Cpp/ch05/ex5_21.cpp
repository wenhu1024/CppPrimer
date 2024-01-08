#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

int main()
{
    string str,t;
    while(cin>>str){
        if(str==t){
            if(!isupper(str[0])){
                continue;
            }else{
                cout<<str<<endl;
                break;
            }
        }
        else{
            t=str;
        }
    }
    if(cin.eof()){
        cout<<"No eligible str."<<endl;
    }

    return 0;
}