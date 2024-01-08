#include "ex15_3.h"

class Limit_quote: public Quote{
public:
    Limit_quote()=default;
    Limit_quote(const string &b,double p,size_t lim,double dis):
                Quote(b,p),limit(lim),discount(dis){}
    double net_price(size_t cnt) const override{
        if(cnt<=limit){
            return price*(1-discount)*cnt;
        }else{
            return price*(1-discount)*limit+price*(cnt-limit);
        }
    }
private:
    size_t limit=0;
    double discount=0.0;
};
int main(){
    Quote q("textbook", 10.60);
    Bulk_quote bq("textbook", 10.60, 10, 0.3);
    print_price(std::cout, q, 12);
    print_price(std::cout, bq, 12);
    return 0;
}