#include "ex7_11.h"

int main()
{
    Sales_data s1;
    print(cout,s1)<<endl;

    Sales_data s2("s123",12);
    print(cout,s2)<<endl;

    Sales_data s3("k123",2,20);
    print(cout,s3)<<endl;

    Sales_data s4(cin);
    print(cout,s4)<<endl;
}