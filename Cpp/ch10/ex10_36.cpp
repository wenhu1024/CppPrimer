#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	list<int> lis = { 1, 2, 3, 4, 5, 6, 7, 0, 8, 9 };
	auto it=find(lis.crbegin(),lis.crend(),0);
    cout << *it << endl;
	return 0;
}