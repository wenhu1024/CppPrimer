#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string s;
    vector<pair<string,int>> vec;
    while(cin >> s >> n){
        vec.push_back(make_pair(s,n));
    }
    for(auto e:vec){
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}