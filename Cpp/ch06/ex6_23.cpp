#include <iostream>

using std::cin;using std::cout;using std::endl;using std::begin;using std::end;

void print(const int &n){
    cout<<n<<endl;   
}

void print(const int *beg,const int *end){
	while(beg!=end){
		cout<<*beg++<<endl;
	}
}

int main()
{   
    int i=0;
    int j[2]={1,2};
    print(i);
    print(begin(j),end(j));
    return 0;
}
