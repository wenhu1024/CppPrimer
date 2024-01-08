#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec{"1","2","3"};
    int sum=0;
    for(auto e:vec){
        sum+=stoi(e);
    }
    cout<<sum<<endl;
    return 0;
}

