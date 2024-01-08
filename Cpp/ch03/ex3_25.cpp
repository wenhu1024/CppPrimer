#include <iostream>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main()
{
    vector<int> n(11,0);
    unsigned grade;
    auto it=n.begin();
    while(cin>>grade){
        if(grade <= 100){
            ++(*(it+grade/10));
        }
    }
    while(it!=n.end()){
        cout << *it << "\t";
        ++it;
    }
    cout << endl;
    return 0;
}
//42 65 95 100 39 67 95 76 88 76 83 92 76 93
//0       0       0       1       1       0       2       3       2       4     1