#include <iostream>
#include <string>
#include <memory>

using namespace std;


int main()
{
    allocator<string> allo;
    unsigned max=5;
    auto p=allo.allocate(max);
    string s;
    string *q=p;
    while(cin>>s && q != p+max){
        allo.construct(q++,s);
    }
    while(q!=p){
        cout << *--q << endl;
        allo.destroy(q);
    }
    allo.deallocate(p,max);
    return 0;
}