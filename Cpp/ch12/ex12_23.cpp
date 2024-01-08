#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    const char *s1="cpp ";
    const char *s2="best";
    unsigned len=strlen(s1)+strlen(s2)+1;
    char *p=new char[len]();
    strcpy(p,s1);
    strcat(p,s2);
    cout << p << endl;
    delete [] p;

    string str1="nice ";
    string str2="cpp";
    auto sz=str1.size()+str2.size()+1;
    char *s=new char[sz]();
    strcpy(s,(str1+str2).c_str());
    cout << s << endl;
    delete [] s;
    return 0;
}