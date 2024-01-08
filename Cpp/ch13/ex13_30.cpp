#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr &p1,HasPtr &p2);
    friend ostream& print(ostream &os,const HasPtr &h);
    HasPtr(const string &s=string()):ps(new string(s)),i(0){}
    HasPtr(const HasPtr& p):ps(new string(*p.ps)),i(p.i){}
    HasPtr& operator=(HasPtr p){swap(*this,p);return *this;}
    ~HasPtr(){delete ps;}
private:
    string *ps;
    int i;
};

inline
void swap(HasPtr &p1,HasPtr &p2){
    using std::swap;
    swap(p1.ps,p2.ps);
    swap(p1.i,p2.i);
    cout << "swap()" << endl;
}
inline
ostream& print(ostream &os,const HasPtr &h){
    return os << *h.ps;
}

int main()
{
    HasPtr t1("123");
    HasPtr t2("456");
    t2=t1;
    print(cout,t2)<<endl;
    print(cout,t1)<<endl;
    return 0;
}