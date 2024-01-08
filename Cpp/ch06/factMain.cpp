#include "Chapter6.h"
#include <iostream>

using std::cin;using std::cout;using std::endl;

int main()
{
    cout<<"fact:\n";
    for(size_t i=0;i!=10;++i){
        cout<<fact()<<"\t";
    }
    cout<<endl;
    
    cout<<"func:\n";
    cout<<func(5)<<endl;

    cout<<"f:\n";
    cout<<f(-3.45)<<endl;
    return 0;
}