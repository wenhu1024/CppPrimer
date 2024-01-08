#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    string str,str1,str_m;
    size_t m=0;
    if(cin>>str){
        int cnt=1;
        while(cin>>str1){
            if(str1==str){
                cnt++;
            }else{
                if(m<cnt){
                    m=cnt;
                    str_m=str;
                }
                cnt=1;
                str=str1;
            }
            
        }
        cout<<str_m<<": "<<m<<endl;
    }
    
    return 0;
}