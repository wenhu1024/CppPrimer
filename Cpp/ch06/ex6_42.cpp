#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

string make_plural(size_t ctr,const string &word,string ending="s"  ){
    return ctr>1 ? word+ending : word;
}

int main()
{   
    cout<<make_plural(1,"success","es")<<endl;
    cout<<make_plural(2,"success","es")<<endl;
    cout<<make_plural(2,"failure")<<endl;
    return 0;
}