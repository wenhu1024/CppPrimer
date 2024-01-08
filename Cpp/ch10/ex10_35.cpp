#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    vector<string> vec{"1","12","123","1234"};
    auto end=vec.cend(),beg=vec.cbegin();
    while(end-beg>=0){
        cout<< *--beg <<" ";
    }
    cout << endl;
    return 0;
}