#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

bool f_exists_upper(const string& s){
    for(decltype (s.size()) i=0;i!=s.size();++i){
        if(isupper(s[i])){
            return true;
        }
    } 
    return false;
}

void to_lower(string &s){
    for(auto c:s){
        c=tolower(c);
    }
}
int main()
{
    string str1("cpP");
    string str2("cpp");

    to_lower(str2);
    cout<<f_exists_upper(str1)<<endl;
    cout<<str2<<endl;
    return 0;
}