#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n;
    vector<int> num;
    while(cin>>n){
        num.push_back(n);
    }
    for(decltype(num.size()) ind =1; ind!= num.size(); ++ind){
        cout << num[ind]+num[ind-1] << endl;
    }

    return 0;
}