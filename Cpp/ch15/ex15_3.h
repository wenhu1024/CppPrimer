#ifndef EX15_3_H
#define EX13_3_H
#include <iostream>
#include <string>

using namespace std;

class Quote{
public:
    Quote()=default;
    Quote(const string &s,double p):bookNo(s),price(p){}
    string isbn() const {return bookNo;}
    virtual double net_price(size_t n) const{
        return n*price;
    }
    virtual ~Quote()=default;
private:
    string bookNo;
protected:
    double price=0.0;
};

double print_price(ostream &os,const Quote &q,size_t n){
    auto total=q.net_price(n);
    os << "isbn: " << q.isbn() << " - " << total << endl;
    return total;
}


class Bulk_quote:public Quote{
public:
    Bulk_quote()=default;
    Bulk_quote(const string &b,double p,size_t n,double dis):
                Quote(b,p),min_qty(n),discount(dis){}
    double net_price(size_t cnt) const override{
        if(cnt>=min_qty){
            return cnt*(1-discount)*price;
        }else{
            return cnt*price;
        }
    }
    
private:
    size_t min_qty=0;
    double discount=0.0;
};
#endif