#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lis{0,0,0,1,1,2,3,4};
    lis.unique();
    for(auto e:lis){
        cout << e << " ";
    }
    cout << endl;
    return 0;
}