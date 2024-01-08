#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::iterator;

int main()
{
    vector<string> v{"just","do","it","","cpp"};
    for(auto it = v.begin();it!=v.end()&&!it->empty();it++){
        for(auto &e:*it){
            e = toupper(e);
        }
        cout << *it << endl;
    }
    return 0;
}
