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

class Disc_quote:public Quote{
public:
    Disc_quote()=default;
    Disc_quote(const string &b,double p,size_t sz,double dis):
        Quote(b,p),quantity(sz),discount(dis){}
    double net_price(size_t) const=0;
private:
    size_t quantity=0;
    double discount=0.0;
};

class Bulk_quote:public Disc_quote{
public:
    Bulk_quote()=default;
    Bulk_quote(const string &b,double p,size_t sz,double dis):
        Disc_quote(b,p,sz,dis){}
    double net_price(size_t) const override;
};

