#include <iostream>
#include <algorithm>
#include "../ch07/ex7_40.h"
#include <vector>

using namespace std;

bool compareIsbn(const Sales_data &s1,const Sales_data &s2){
    return s1.isbn().size() < s2.isbn().size();
}

int main()
{
    vector<Sales_data> vec{Sales_data("cpp is nice"),Sales_data("abc"),Sales_data("abcd"),Sales_data("abcef")};
    sort(vec.begin(),vec.end(),compareIsbn);
    for(auto e:vec){
        print(cout,e)<<endl;
    }  
    return 0;
}