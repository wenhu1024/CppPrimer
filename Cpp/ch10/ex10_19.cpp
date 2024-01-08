#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

bool is_shorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}

vector<string> &elimDups(vector<string> &vec){
    sort(vec.begin(),vec.end());
    auto end_unique = unique(vec.begin(),vec.end());
    vec.erase(end_unique,vec.end());
    stable_sort(vec.begin(),vec.end(),is_shorter);
    return vec;
}

void biggies(vector<string> &vec,vector<string>::size_type sz){
    elimDups(vec);
    vector<string>::const_iterator wc = stable_partition(vec.begin(),vec.end(),
                [sz](string s){return s.size() >= sz;});
    auto count = wc- vec.begin();
    cout << ">="  << sz << endl
         << "count: " << count 
         << endl;        
    for_each(vec.cbegin(),wc,
                [](const string &s){cout << s << " ";});
    cout << endl;
}

int main()
{   
    vector<string> vec{"cat","app","app","beauty","buffer","beauty","cattle"};
    biggies(vec,4);
}