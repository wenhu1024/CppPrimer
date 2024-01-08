#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

struct Sales_data{
    std::string bookNo;
    double revenue=0.0;
    unsigned units_sold =0;
};

int main()
{
    Sales_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sales_data tran;
        while(cin>>tran.bookNo>>tran.units_sold>>tran.revenue){
            if(total.bookNo==tran.bookNo){
                total.revenue+=tran.revenue;
                total.units_sold+=tran.units_sold;
            }else{
                cout<<total.bookNo<<": "<<total.units_sold<<"  "<<total.revenue<<endl;
                total=tran;
            }
        }
        cout<<total.bookNo<<": "<<total.units_sold<<"  "<<total.revenue<<endl;
    }else{
        cout<<"No data?\n";
    }


    return 0;
}