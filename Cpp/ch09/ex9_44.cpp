#include <iostream>
#include <string>

using namespace std;

void change_with(string &s, const string &oldVal, const string &newVal){
    for(size_t pos=0; pos <=s.size()-oldVal.size();){
        if(s[pos]==oldVal[0] && s.substr(pos,oldVal.size())==oldVal){
            s.replace(pos,oldVal.size(),newVal);
            pos+=newVal.size();
        }else{
            ++pos;
        }
    }
}
int main()
{
    string str="learn oop tho thru cpp";
    change_with(str,"tho","thought");
    change_with(str,"thru","through");
    cout<<str<<endl;
    return 0;
}