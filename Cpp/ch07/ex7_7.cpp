#include "ex7_6.h"

int main()
{
    Sales_data total;
    if(read(cin,total)){
        Sales_data tran;
        while(read(cin,tran)){
            if(total.bookNo==tran.bookNo){
                total=add(total,tran);
            }else{
                print(cout,total)<<endl;
                total=tran;
            }
        }
        print(cout,total)<<endl;
    }
    return 0;
}