#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // string str,end;
    // while(cin>>str){
    //     end+=str;
    // }
    // cout << end << endl;
    // cout << "************" << endl;
    string str0,end0;
    int i=1;
    while(cin>>str0){
      if(i==1){
        end0=str0;
        i--;
      }
      end0+=' '+str0;
    }
    cout << end0 << endl;
    return 0;
}