#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr &p1,HasPtr &p2);\
    friend ostream& print(ostream &os,const HasPtr &h);
    friend bool operator <(const HasPtr &p1,const HasPtr &p2);
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

bool operator <(const HasPtr &p1,const HasPtr &p2){return *p1.ps<*p2.ps;}

int main()
{
    HasPtr t1("abc");
    HasPtr t2("def");
    HasPtr t3("ghi");
    //t3=t1;
    vector<HasPtr> vec{t2,t1,t3};

    std::sort(vec.begin(),vec.end());
    for(auto e:vec){
        print(cout,e)<<endl;
    }
    return 0;
}