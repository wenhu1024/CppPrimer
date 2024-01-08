#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Jr."),s2("Mr.");
    string name("Wang");
    name.append(s1);
    name.insert(name.begin(),s2.cbegin(),s2.cend());
    cout<<name<<endl;
    return 0;
}