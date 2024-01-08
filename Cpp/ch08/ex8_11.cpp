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
    istringstream is;
    while(getline(in,s)){
        vec.push_back(s);
        is.clear();
        is.str(s);
        while(is>>t){
            cout<<t<<endl;
        }
    }
    return 0;
}