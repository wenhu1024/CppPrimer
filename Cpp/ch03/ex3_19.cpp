#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    
    vector<int> n0 (10,42);
    vector<int> n1 {42,42,42};
     vector<int> n2;
    for(decltype(n2.size()) ind=0; ind != 10; ind++){
        n2.push_back(42);
    }  
    cout << "the first is better" << endl;  
    return 0;
}
   


