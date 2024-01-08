#include <sstream>
#include <iostream>
using namespace std;

istream &read(istream &is){
    string n;
    while(is>>n){
        cout << n << endl;
    }
    is.clear();
    return is;
}

int main()
{
    istringstream s("cpp is best"); 
    read(s);
    return 0;
}
