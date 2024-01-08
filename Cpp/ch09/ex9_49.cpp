#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    ifstream in("ex9_49.md");

    if(!in){
        cout<<"No data?\n";
        return -1;
    }

    string str;
    string long_str;
    while(in>>str){
        if(string::npos==str.find_first_not_of("aceimnorsuvwxz")){
            long_str = long_str.size()<str.size() ? str : long_str;
        }
    }
    cout<<long_str<<endl;
    return 0;
}