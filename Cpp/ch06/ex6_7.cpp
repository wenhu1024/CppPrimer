#include <iostream>

using std::cin;using std::cout;using std::endl;

int f(){
    static int a=0;
    return a++;
}
int main()
{
    for(size_t i=0;i!=10;++i){
        cout<<f()<<endl;
    }
    return 0;
}