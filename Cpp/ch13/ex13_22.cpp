#include <iostream>
#include <string>

using namespace std;

class HasPtr{
public:
    HasPtr(const string &s=string()):str(new string(s)),num(0){}
    HasPtr(const HasPtr &h):num(h.num),str(new string(*h.str)){}
    HasPtr& operator=(const HasPtr &h){
        if(this==&h){
            return *this;
        }
        num=h.num;
        delete str;
        str=new string(*h.str);
        return *this;
    }
    ~HasPtr(){delete str;}
private:
    int num;
    string *str;
};