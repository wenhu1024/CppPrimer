#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class isEqual{
public:
    isEqual(int a):n(a){}
    bool operator()(int t) const{
        return t==n;
    }
private:
    int n;
};

int main()
{
    vector<int> vec{1,1,1,2,3,4,5};
    std::replace_if(vec.begin(), vec.end(), isEqual(3), 5);
    for(auto e:vec){
        cout << e << " ";
    }
    return 0;
}