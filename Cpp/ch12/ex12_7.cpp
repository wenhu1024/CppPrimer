#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> alloc_vector(){
    return make_shared<vector<int>>();
}

void push_back(shared_ptr<vector<int>> p){
    int n;
    cout << "Input num:\n";
    while(cin>>n){
        p->push_back(n);
    }
} 
void print_vector(shared_ptr<vector<int>> p){
    for(auto e:*p){
        cout << e << " ";
    }
    cout << endl;
}
int main()
{
    auto p=alloc_vector();
    push_back(p);
    print_vector(p);
    return 0;
}