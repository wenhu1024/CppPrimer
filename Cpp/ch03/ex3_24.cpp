#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> n{1,2,3,4,5};
    for(auto it=n.cbegin();it!=n.cend()-1;++it){
        cout << *it+*(it+1) << endl;
    }
    cout <<"*********"<<endl;
    auto it0=n.begin(),it1=n.end()-1; 
    for(int i=0;i!=n.size();i++){        
        cout<<*(it1-i)+*(it0+i)<<endl;
    }


    return 0;
}