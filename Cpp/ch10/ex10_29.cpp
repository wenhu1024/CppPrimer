#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>


using namespace std;

int main()
{
    ifstream ifn("ex10_29.md");
    if(!ifn){
        cout << "No data?" << endl;
        return -1;
    }
    vector<string> vec;
    istream_iterator<string> in(ifn),eof;
    copy(in,eof,back_inserter(vec));
    ostream_iterator<string> out(cout," ");
    copy(vec.begin(),vec.end(),out);
    cout << endl;
    return 0;
}