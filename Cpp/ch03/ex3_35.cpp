#include <iostream>
#include <vector>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::iterator;
using std::end;
using std::begin;

int main()
{
    constexpr size_t array_size = 10;
    int array[array_size];
    int* i = begin(array);
    while(i!=end(array)){
        *i=0;
        i++;
    }
    for(auto e:array){
        cout << e << "  ";
    }
    return 0;
}