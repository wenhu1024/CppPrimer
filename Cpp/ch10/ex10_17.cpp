#include <iostream>
#include <algorithm>
#include "../ch07/ex7_40.h"
#include <vector>

using namespace std;

int main()
{
    vector<Sales_data> vec{Sales_data("cpp is nice"),Sales_data("abc"),Sales_data("abcd"),Sales_data("abcef")};
    sort(vec.begin(),vec.end(),
    [](const Sales_data &s1,const Sales_data &s2){return s1.isbn() < s2.isbn();});
    for(auto e:vec){
        print(cout,e)<<endl;
    }  
    return 0;
}