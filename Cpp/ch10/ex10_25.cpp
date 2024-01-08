#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool is_shorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}
bool check_size(const string &s1,string::size_type sz){
    return s1.size() >= sz;
}
void print(const string &s){
    cout << s << " ";
}
void biggies(vector<string> &s,string::size_type sz){
    sort(s.begin(),s.end(),is_shorter);
    auto end_unique = unique(s.begin(),s.end());
    s.erase(end_unique,s.end());
    auto it=stable_partition(s.begin(),s.end(),bind(check_size,_1,sz));
    cout << ">=" << sz << "\n" << (it-s.begin()) << endl;
    for_each(s.begin(),it,bind(print,_1));
    cout << endl;
}
int main()
{
    vector<string> vec{"cat","app","app","beauty","buffer","beauty","cattle"};
    biggies(vec,4);
    return 0;
}