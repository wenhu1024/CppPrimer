//the same isbn needs to be placed together

#include <iostream>
#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_item currItem,item;
    if(cin>>currItem){
        int cnt=1;
        while(cin>>item){
            if(currItem.isbn()==item.isbn()){
                cnt++;
            }else{
                cout << currItem<<" occurs "<<cnt<<endl;
                currItem=item;
                cnt=1;
            }
        }
        cout << currItem<<" occurs "<<cnt<<" times "<<endl;
    }
    return 0;
}