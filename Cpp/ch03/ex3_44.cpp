#include <iostream>
#include <iterator>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;
using std::iterator;

using int_a =int[4];

int main()
{
    int a[3][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    for(int_a (&p) :a){
        for(int e:p){
            cout << e <<' ';
        }
    }
    cout << endl <<"***********" << endl;
    for(int i=0;i!=3;i++){
        for(int j=0;j!=4;j++){
            cout << a[i][j] <<' ';
        }
    }
    cout << endl <<"***********" << endl;
    for(int_a (*p) =begin(a);p!=end(a);++p){
        for(int *q=begin(*p);q!=end(*p);++q){
            cout << *q << ' ';
        }
    }
    cout << endl;
    return 0;
}