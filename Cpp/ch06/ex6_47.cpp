#include <iostream>
#include <string>
#include <vector>

using std::cin;using std::cout;using std::endl;using std::string;using std::vector;

void print(vector<int> &v){
#ifndef NDEBUG
    cout<<"The size: "<<v.size()<<endl;
#endif
    if(!v.empty()){
        int t=v.back();
        v.pop_back();
        print(v);
        cout<<t<<"\t";
    }
}

int main()
{   
    vector<int> v={1,2,3,4};
    print(v);
    return 0;
}