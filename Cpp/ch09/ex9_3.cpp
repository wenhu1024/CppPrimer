#include <iostream>
#include <vector>

using namespace std;

bool find_item(vector<int>::iterator beg,vector<int>::iterator end,int item ){
    for(;beg!=end;++beg){
        if(*beg==item){return true;}
    }
    return false;
}
int main()
{
    vector<int> vec{1,2,3,4,5};
    cout << find_item(vec.begin(),vec.end(),3) <<endl;

    return 0;
}