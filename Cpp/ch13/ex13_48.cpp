#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class String{
public:
    String(const char*s=0);
    String(const String &s);
    String& operator=(const String &s);
    ~String();
    char *get_c_str() const{return str;};
private:
    char *str;
};

inline
String::String(const char *s){
    if(s){
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }else{
        str=new char[1];
        *str='\0';
    }
}

inline
String::String(const String &s){
    cout << "ctor"<<endl;
    str=new char[strlen(s.str)+1]; 
    strcpy(str,s.str);
}

inline
String::~String(){
    delete[] str;
}

inline
String& String:: operator=(const String &s){
    cout << "op="<<endl;
    if(this==&s){
        return *this;
    }
    delete[] str;
    str=new char[strlen(s.str)+1];
    strcpy(str,s.str);
    return *this;
}
ostream &operator <<(ostream &os,const String &s){
    return os << s.get_c_str();
}
int main()
{
  String s1("hello"); 
  String s2("world");
  vector<String> vec;
  vec.push_back(s1);
  vec.push_back(s2);
}