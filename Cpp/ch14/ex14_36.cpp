#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PrintString{
public:
    PrintString(istream &s=cin):is(s){}
    string operator()() const{
        string str;
        getline(is,str);
        return is ? str : string(); 
    }
private:
    istream &is;
};

int main()
{
    vector<string> vec;
    PrintString p(cin);
    for(string tmp;!(tmp=p()).empty();){
        vec.push_back(tmp);
    }
    for(const auto &e:vec){
        cout << e << endl;
    }
    return 0;
}