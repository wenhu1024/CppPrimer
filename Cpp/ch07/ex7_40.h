#ifndef EX7_40_H
#define EX7_40_H
#include <iostream>
#include <string>

using namespace std;

class Sales_data{
    friend istream &read(istream &is,Sales_data &s);
    friend ostream &print(ostream &os,Sales_data &s);
    friend Sales_data add(const Sales_data &s1,const Sales_data &s2);
public:
    Sales_data(const string& s,unsigned n,double r):
                bookNo(s),units_sold(n),revenue(r){}
    Sales_data():Sales_data("",0,0.0){}
    Sales_data(const string &s):Sales_data(s,0,0.0){}
    Sales_data(istream &is):Sales_data(){read(is,*this);}

    string isbn()const;
    Sales_data &combine(const Sales_data &s);
private:
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};

inline
string Sales_data::isbn()const{
    return this->bookNo;
}

inline 
Sales_data &Sales_data::combine(const Sales_data &s){
    revenue+=s.revenue;
    units_sold+=s.units_sold;
    return *this;
}

inline
istream &read(istream &is,Sales_data &s){
    is >> s.bookNo >> s.units_sold >> s.revenue;
    return is;
}

inline
ostream &print(ostream &os,Sales_data &s){
    os << s.bookNo << " : " << s.units_sold << " " << s.revenue;
    return os;
}

inline 
Sales_data add(const Sales_data &s1,const Sales_data &s2){
    Sales_data sum=s1;
    sum.combine(s2);
    return sum;
}
#endif