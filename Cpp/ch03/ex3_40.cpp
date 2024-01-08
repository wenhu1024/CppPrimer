#include <iostream>
#include <string>
#include <iterator>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::iterator;
using std::end;

int main()
{
    
    char s1[10]="just ";
    char s2[10]="do it";
    char s3[50];
    strcpy(s3,s1);
    strcat(s3,s2);
    printf("%s\n",s3);
    return 0;
}