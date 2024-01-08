#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec{"1","2","3"};
    double sum=0;
    for(auto e:vec){
        sum+=stod(e);
    }
    cout<<sum<<endl;
    return 0;
}

