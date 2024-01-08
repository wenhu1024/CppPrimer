#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void f(const vector<int> v){
    if(v.empty()){
        cout << "no elements" << endl;
    }else{
        cout << v.size() << " elements " <<"\t";
        cout << "content: " << endl;
        for(auto e:v){
            cout << e <<"\t";
        }
        cout << endl;
    }
}
void f(const vector<string> v){
    if(v.empty()){
        cout << "no elements" << endl;
    }else{
        cout << v.size() << " elements " <<"\t";
        cout << "content: " << endl;
        for(auto e:v){
            cout << e <<"\t";
        }
        cout << endl;
    }
}


int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };
    f(v1);
    f(v2);
    f(v3);
    f(v4);
    f(v5);
    f(v6);
    f(v7);
    return 0;
}