#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    ifstream in("in.md");
    if(!in){
        cout<<"No data?"<<endl;
        return -1;
    }
    string s,t;
    while(getline(in,s)){
        vec.push_back(s);
        istringstream is(s);
        while(is>>t){
            cout<<t<<endl;
        }
    }
    return 0;
}