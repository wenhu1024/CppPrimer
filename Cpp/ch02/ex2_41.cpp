#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
struct Sales_data{
    std::string bookNo;
    std::string bookName;
    double revenue=0.0;
    unsigned units_sold =0;
    double price=0.0;
};

int main()
{
    Sales_data data1,data2;
    cin>> data1.bookNo >> data1.units_sold >> data1.price;
    cin>> data2.bookNo >> data1.units_sold >> data1.price;
    data1.revenue = data1.price*data1.units_sold;
    data2.revenue = data2.price*data2.units_sold;
    if(data1.bookNo==data2.bookNo){
        unsigned totalCnt=data1.units_sold+data2.units_sold;
        double totalRevenue = data1.revenue+data2.revenue;
        if(totalCnt!=0){
            cout << totalRevenue/totalCnt << endl;
        }else{
            cout << "(no sales)" << endl;
        }
    }else{
        cout << "not the same" << endl;
        return -1;
    }
                               
}
//0-201-78345-x 3 20.00
//0-201-78345-x 2 20.00