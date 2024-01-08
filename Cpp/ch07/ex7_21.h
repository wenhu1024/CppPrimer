#ifndef EX7_21_H
#define EX7_21_H
#include <iostream>
#include <string>

using std::cin;using std::cout;using std::endl;using std::istream;
using std::string;using std::ostream;

class Sales_data{
    friend istream &read(istream &is,Sales_data &s);
    friend ostream &print(ostream &os,const Sales_data &s);
public:
    Sales_data () =default;
    Sales_data (const string &s,unsigned n) : 
                bookNo(s),units_sold(n){}
    Sales_data (const string &s,unsigned n, double p) : 
                bookNo(s),units_sold(n),revenue(n*p) {}
    Sales_data(istream &is);    

    string isbn() const {return this->bookNo;} 

    Sales_data& combine(const Sales_data& s){
        units_sold+=s.units_sold;
        revenue+=s.revenue;
        return *this;
    }

private:    
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;        
};

ostream& print(ostream &os,const Sales_data& s){
    os << s.bookNo << " " << s.units_sold <<" "<< s.revenue;
    return os;
}
istream& read(istream &is,Sales_data &s){
    is >> s.bookNo >> s.units_sold >> s.revenue;
    return is;
}
Sales_data::Sales_data(istream &is){
    read(is,*this);
}
#endif