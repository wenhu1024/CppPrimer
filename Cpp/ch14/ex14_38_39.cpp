#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

class Fun{
public:
    Fun(size_t lower,size_t upper):_lower(lower),_upper(upper){}
    bool operator()(const string &s)const{
        return s.size()>=_lower && s.size()<=_upper;
    }
    size_t getUpper()const{
        return _upper;
    }
private:
    size_t _lower;
    size_t _upper;
};
int main()
{
    vector<int> uppers{ 3u, 4u, 5u, 6u, 7u, 8u, 9u, 10u, 11u, 12u, 13u, 14u };
    map<size_t,size_t> count;
    size_t lower=1;
    vector<Fun> predicates;
    for(size_t upper:uppers){
        predicates.push_back(Fun{lower,upper});
        count[upper]=0;
    }
    ifstream fin("storyDataFile.txt");
    string word;
    while(fin>>word){
        for(auto in:predicates){
            if(in(word)){
                ++count[in.getUpper()];
            }
        }
    }
    for (auto pair : count)
		std::cout << "count in range [1, " << pair.first << "] : " << pair.second << std::endl;

    return 0;
}