#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Jr."),s2("Mr.");
    string name("Wang");
    name.insert(name.size(),s1);
    name.insert(0,s2);
    cout<<name<<endl;
    return 0;
}