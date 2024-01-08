#include <fstream>
#include "ex12_19.h"

int main()
{
    ifstream in("given.md");
    if(!in){
        cout << "no data?" << endl;
        return -1;
    }
    string s;
    
    StrBlob b;
    while(getline(in,s)){
        b.push_back(s);
    }
    
    StrBlobPtr bp;

    for(bp=b.begin();bp!=b.end();bp.incr()){
        cout << bp.deref() << endl;
    }

    return 0;
}