#include <iostream>

using namespace std;

class numbered{
public:
    numbered ():mysn(uniq++){}
    static int uniq;
    int mysn;
};

int numbered::uniq=1;

void f(numbered s){
    cout << s.mysn << endl;
}

int main()
{
    numbered a,b=a,c=b;
    f(a),f(b),f(c);
    return 0;
}