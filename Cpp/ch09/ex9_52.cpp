#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
    string str("This is a (test)");
    stack<char> s;
    bool seen=0;
    for(auto e:str){
        if(e=='('){
            seen=true;
            continue;
        }else if(e==')'){
            seen=false;
        }

        if(seen){
            s.push(e);
        }
    }
    string res;
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }

    str.replace(str.find_first_of( "(" )+1,res.size(),res);
    cout << str << endl;
    return 0;
}