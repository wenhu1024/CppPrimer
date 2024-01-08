#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void elimDups(vector<string> &vec){
    sort(vec.begin(),vec.end());
    auto end_unique=unique(vec.begin(),vec.end());
    vec.erase(end_unique,vec.end());
}

class ShorterString{
public:
    bool operator()(const string &s1,const string &s2)const{
        return s1.size()<s2.size();
    }
};

class BigEqual{
public:
    BigEqual(size_t s):sz(s){}
    bool operator()(const string& s)const{
        return s.size()>=sz;
    }
private:
    size_t sz;
};

class Print{
public:
    void operator()(const string &s)const{
        cout << s << endl;
    }
};

string make_plural(size_t ctr, string const& word, string const& ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words,size_t sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),ShorterString());
    auto wc=find_if(words.begin(),words.end(),BigEqual(sz));
    auto count = words.end()-wc;
    cout << count << " " << make_plural(count,"word","s")
         << " of length " << sz << " or longer " << endl;
    for_each(wc,words.end(),Print());     
}
int main()
{
    vector<string> vec{ "fox", "jumps", "over", "quick", "red", "red", "slow", "the", "turtle" };
	biggies(vec, 4);
    return 0;
}