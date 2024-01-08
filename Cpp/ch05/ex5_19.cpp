#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

int main()
{
    string str1,str2,rsp;
    do{
        cin>>str1>>str2;
        cout<<(str1.size()<str2.size()?str1:str2)<<endl
            <<"More?  Enter yes or no"<<endl;
        cin>>rsp;    
    }while(!rsp.empty()&&rsp[0]!='n');
    
    return 0;
}