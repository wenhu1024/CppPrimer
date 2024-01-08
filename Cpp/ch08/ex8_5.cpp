#include <fstream>
#include <string>
#include <vector>
using namespace std;

void read_file_line(const string &file,vector<string> &l){
    ifstream in(file);
    if(in){
        string t;
        while(in>>t){
            l.push_back(t);
        }
    }
}
