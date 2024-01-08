#include <iostream>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::iterator;
using std::begin;
using std::end;

int main()
{
    
    int v1[]={1,2,3,4,5},
        v2[]={1,2,3,4,5};
        //v2[]={1,2,3};
    vector<int> n1{1,2,3,4,5},
                n2{1,2,3,4};
    if((end(v1)-begin(v1))==(end(v2)-begin(v2))){
        for(int *i1=v1,*i2=v2;i1!=end(v1)&&i2!=end(v2);++i1,++i2){
            if(*i1!=*i2){
                cout << "not same" << endl;
                break;
            }
        }
        cout << "same" << endl;
    }else{
        cout << "not same" << endl;
    }

    if(n1==n2){
        cout << "same" << endl;
    }else{
        cout << "not same" << endl;
    }   
    return 0;
}