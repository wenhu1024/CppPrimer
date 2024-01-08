#include <iostream>
#include <initializer_list>

using std::cin;using std::cout;using std::endl;using std::initializer_list;


int get_sum(initializer_list<int> nums){
    int sum=0;
    auto beg=nums.begin();
    while(beg!=nums.end()){
        sum+=*beg++;
    }
    return sum;
}
int main(int argc,char **argv)
{   
    initializer_list<int> nums{1,2,3,4,5};
    cout<<get_sum(nums)<<endl;
    return 0;
}