#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s,size_t sz){
    return s.size() > sz;
}

int main(){
    string s="1234";
    vector<int> vec{7,8,9,3,4,5,6};
    auto it=find_if(vec.begin(),vec.end(),bind(check_size,ref(s),_1));
    if(it==vec.end()){cout << "No found.\n";}
    else{
        cout << *it << endl;
    }
    return 0;
}

