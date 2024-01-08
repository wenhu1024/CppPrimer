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

bool is_shorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}
int main()
{
    Seq vec{"cat","app","app","beauty","buffer","beauty","cattle"};
    elimDups(vec);
    print(vec) << endl; 
    stable_sort(vec.begin(),vec.end(),is_shorter);
    print(vec) << endl; 
    return 0;
}