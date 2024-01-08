#include <iostream>
using namespace std;

istream &read(istream &is){
    int n;
    while(is>>n){
         cout<< n <<endl;
    }
    is.clear();
    return is;
}

int main()
{
    istream &is=read(cin);
    cout<<is.rdstate();
    return 0;
}