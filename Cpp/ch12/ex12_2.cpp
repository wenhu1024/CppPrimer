#include <iostream>
#include <memory>
#include <initializer_list>
#include <string>
#include <vector>
#include <exception>

using namespace std;

class StrBlob{
public:
    using size_type = vector<string>::size_type; 
    StrBlob():data(make_shared<vector<string>>()){};
    StrBlob(initializer_list<string> lis):data(make_shared<vector<string>>(lis)) {};
    size_type size() const {return data->size(); }
    bool empty() const {return data->empty();}

    void push_back(const string &s){data->push_back(s);}
    void pop_back(){check(0,"pop_back on empty StrBlob");data->pop_back();}

    string &front(){check(0,"front on empty StrBlob");return data->front();}
    const string &front() const {check(0,"front on empty StrBlob");return data->front();}

    string &back(){check(0,"back on empty StrBlob");return data->back();}
    const string &back() const {check(0,"back on empty StrBlob");return data->back();}

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg ) const{if(i>=data->size()) throw out_of_range(msg);}
};

int main()
{
    const StrBlob csb{ "hello", "world", "pezy" };
    StrBlob sb{ "hello", "world", "Mooophy" };

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;

    return 0;
}