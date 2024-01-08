#include <iostream>
#include <string>

using namespace std;

void change_with(string &s, const string &oldVal, const string &newVal){
    for(auto beg=s.begin();beg<=s.end()-oldVal.size();){
        if(oldVal==string{beg,beg+oldVal.size()}){
            beg=s.erase(beg,beg+oldVal.size());
            beg=s.insert(beg,newVal.begin(),newVal.end());
            beg+=newVal.size();
        }else{
            ++beg;
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