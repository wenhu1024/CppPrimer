#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main()
{
    vector<int> vec1{1,2,3,4};
    vector<int> vec2{1,2,3,4};
    vector<int> vec3{1,2,3};
    vector<int> vec4{1,2,3,3,5};
    cout<<(vec1==vec2)<<endl;
    cout<<(vec2>vec3)<<endl;
    cout<<(vec4<vec1)<<endl;
    return 0;
}