#include <iostream>

using namespace std;

int main()
{
    unsigned sz=0;
    cout << "Length:\n";
    cin >> sz;
    char *p=new char[sz+1]();
    cin.ignore();
    cin.get(p,sz+1);
    cout << p << endl;
    delete []p;
    return 0;
}