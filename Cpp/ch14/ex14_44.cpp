#include <iostream>
#include <functional>
#include <map>
#include <string>

using namespace std;

int add(int n1,int n2){
    return n1+n2;
}

struct Div{
    int operator()(int i,int j){
        return i/j;
    }
};

auto mod=[](int i,int j){return i%j;};

map<string,function<int(int,int)>> binops={
    {"+",add},
    {"-",minus<int>()},
    {"*",[](int i,int j){return i*j;}},
    {"/",Div()},
    {"%",mod}
};

int main()
{
    while (std::cout << "Pls enter as: num operator num :\n", true)
	{
		int lhs, rhs; std::string op;
		std::cin >> lhs >> op >> rhs;
		std::cout << binops[op](lhs, rhs) << std::endl;
	}
	return 0;
}