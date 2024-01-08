#ifndef EX7_6_H
#define EX7_6_H

#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::string;
using std::istream;using std::ostream;
struct Sales_data{
    std::string bookNo;
    double revenue=0.0;
    unsigned units_sold =0;    
    Sales_data& combine(const Sales_data &s); 
};
Sales_data& Sales_data::combine(const Sales_data &s){
    units_sold+=s.units_sold;
    revenue+=s.revenue;
    return *this;
}

istream &read(istream &is,Sales_data &s){
    is >> s.bookNo >> s.units_sold >> s.revenue;
    return is;
}

ostream &print(ostream &os,const Sales_data s){
    os << s.bookNo  <<"  "<< s.units_sold<<"  " <<s.revenue;
    return os;
}

Sales_data add(const Sales_data &s1,const Sales_data &s2){
    Sales_data sum=s1;
    sum.combine(s2);
    return sum;
}
#endif