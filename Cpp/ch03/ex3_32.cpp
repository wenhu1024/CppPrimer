#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    constexpr size_t array_size = 10;
    int v1[array_size],v2[array_size];
    for(unsigned i=0;i!=array_size;i++){
        v1[i] = i;
    }
    for(unsigned i=0;i!=array_size;i++){
        v2[i] = v1[i];
    }
    for(auto e:v2){
        cout << e <<"  ";
    }

    cout << "********" << endl;


    vector<int> n1(10);
    vector<int> n2;
    for(unsigned i=0;i!=(n1.cend()-n1.cbegin());i++){
        n1[i]=i;
    }
    n2=n1;
    for(auto e:n2){
        cout << e <<"  ";
    }
    return 0;
}