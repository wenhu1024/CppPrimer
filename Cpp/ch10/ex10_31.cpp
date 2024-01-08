#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    istream_iterator<int> in(cin),eof;
    ostream_iterator<int> out(cout," ");
    vector<int> vec;
    copy(in,eof,back_inserter(vec));
    sort(vec.begin(),vec.end());
    unique_copy(vec.cbegin(),vec.cend(),out);
    return 0;
}