#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec;
    istream_iterator<int> in(cin),eof;
    ostream_iterator<int> out(cout," ");
    copy(in,eof,back_inserter(vec));
    sort(vec.begin(),vec.end());
    copy(vec.cbegin(),vec.cend(),out);
    return 0;
}