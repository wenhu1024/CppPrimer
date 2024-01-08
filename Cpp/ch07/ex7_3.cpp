#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;

struct Sales_data{
    std::string bookNo;
    double revenue=0.0;
    unsigned units_sold =0;
    const string &isbn() const;
    Sales_data& combine(const Sales_data &t);  
};

const string& Sales_data::isbn() const{
    return this->bookNo;
} 

Sales_data& Sales_data::combine(const Sales_data&t){
    units_sold+=t.units_sold;
    revenue+=t.revenue;
    return *this;
} 

int main()
{
    Sales_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sales_data tran;
        while(cin>>tran.bookNo>>tran.units_sold>>tran.revenue){
            if(total.isbn()==tran.isbn()){
                total.combine(tran);
            }else{
                cout<<total.isbn()<<": "<<total.units_sold<<"  "<<total.revenue<<endl;
                total=tran;
            }
        }
        cout<<total.isbn()<<": "<<total.units_sold<<"  "<<total.revenue<<endl;
    }else{
        cout<<"No data?\n";
    }


    return 0;
}