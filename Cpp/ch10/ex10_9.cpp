#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using Seq=vector<string>; 

auto print(const Seq &s) -> ostream &
{
    ostream &os=cout;
    for(auto e:s){
        os << e << " ";
    }
    return os;
}

auto elimDups(Seq &v) ->Seq &
{
    sort(v.begin(),v.end());
    auto end_unique = unique(v.begin(),v.end());
    v.erase(end_unique,v.end());
    return v;
}
int main()
{
    vector<string> vec{"c","a","a","b","f"};
    elimDups(vec);
    print(vec) << endl; 
    return 0;
}