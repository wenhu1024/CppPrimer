#include <iostream>
#include <vector>
#include <memory>

using namespace std;


vector<int> * alloc_vector(){
    return new vector<int> ();
}

void push_back(vector<int> *p){
    cout << "input num:\n";
    int n;
    while(cin>>n){
        p->push_back(n);
    }
}

void print_vector(vector<int> *p){
    for(auto e:*p){
        cout << e << " ";
    }
    cout << endl;
}
int main()
{
    auto p = alloc_vector();
    push_back(p);
    print_vector(p);
    delete p;
    return 0;
}