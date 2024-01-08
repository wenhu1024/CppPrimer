#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator find_item(vector<int>::iterator beg,vector<int>::iterator end,int item ){
    for(;beg!=end;++beg){
        if(*beg==item){return beg;}
    }
    return end;
}
int main()
{
    vector<int> vec{1,2,3,4,5};
    auto it=find_item(vec.begin(),vec.end(),3);
    cout << ((it==vec.end()) ? "Not found." :  "Found.")<<endl;
    return 0;
}