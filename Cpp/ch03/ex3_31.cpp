#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t array_size = 10;
    int v[array_size];
    for(size_t i=0;i!=array_size;i++){
        v[i] = i;
    }
    for(auto e:v){
        cout << e <<"  ";
    }
    return 0;
}