#include <iostream>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include "../ch01/Sales_item.h"

using namespace std;

bool comparisionIsbn(const Sales_item &s1,const Sales_item &s2){
    return s1.isbn() < s2.isbn(); 
}
int main()
{
    vector<Sales_item> vec;
    istream_iterator<Sales_item> in(cin),eof;
    copy(in,eof,back_inserter(vec));
    sort(vec.begin(),vec.end(),comparisionIsbn);
    for(auto beg=vec.begin(),end=beg;beg!=vec.end();beg=end){
            end=find_if(beg,vec.end(),
                        [beg](const Sales_item &s1){return s1.isbn()!=beg->isbn();}); 
        std::cout << std::accumulate(beg, end, Sales_item(beg->isbn())) << std::endl;
    }
}