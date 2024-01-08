#include <iostream>
#include <vector>

using std::cin;using std::cout;using std::endl;using std::vector;

void print(vector<int>::iterator beg,vector<int>::iterator end){
    if(beg!=end){
        cout<<*beg++<<endl;
        print(beg,end);
    }
}
int main()
{
    vector<int> v{1,2,3,4,5};
    print(v.begin(),v.end());
    return 0;
}