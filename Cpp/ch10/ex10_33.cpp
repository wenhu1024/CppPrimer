#include <iostream>
#include <algorithm>
#include <fstream>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    ifstream ifs("nums.md");
    ofstream out_odd("odd.md"),out_even("even.md");
    
    if(!ifs || !out_even || !out_odd){
        cout << "Wrong" << endl;
        return -1;
    }

    istream_iterator<int> in(ifs),in_eof; 
    ostream_iterator<int> out_1(out_odd," "),out_2(out_even," ");

    for_each(in,in_eof,
        [&out_1,&out_2](const int i) {*( i&1 ? out_1 : out_2)++=i;});

    return 0;
}