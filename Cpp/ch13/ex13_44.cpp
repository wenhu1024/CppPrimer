#include <iostream>
#include <cstring>

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
    str=new char[strlen(s.str)+1]; 
    strcpy(str,s.str);
}

inline
String::~String(){
    delete[] str;
}

inline
String& String:: operator=(const String &s){
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
    
  String s3(s2);
  cout << s3 << endl;
  
  s3 = s1;
  cout << s3 << endl;     
  cout << s2 << endl;  
  cout << s1 << endl;   

}