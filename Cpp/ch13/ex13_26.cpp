#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include <exception>

using namespace std;

class StrBlobPtr;

class StrBlob{
public:
    using size_type = vector<string>::size_type;

    friend class StrBlobPtr;
    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlob():data(make_shared<vector<string>>()){}
    StrBlob(initializer_list<string> s):data(make_shared<vector<string>>(s)){}

    StrBlob(const StrBlob &p):data(make_shared<vector<string>>(*p.data)){}
    StrBlob& operator=(const StrBlob &p){data=make_shared<vector<string>>(*p.data);return *this;}

    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}

    void push_back(const string &s){data->push_back(s);}
    void pop_back(){check(0,"pop_back on empty StrBlob");data->pop_back();}

    string& front() {check(0,"front on empty StrBlob");return data->front();}
    string& back() {check(0,"back on empty StrBlob");return data->back();}

    const string& front() const {check(0,"front on empty StrBlob");return data->front();}
    const string& back() const{check(0,"back on empty StrBlob");return data->back();}



private:
    shared_ptr<vector<string>> data;
    
    void check(size_type sz,const string &msg) const{
        if(sz>=data->size()){
            throw runtime_error(msg);
        }
    }
};

class StrBlobPtr{
public:
    StrBlobPtr():curr(0){}
    StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){}
    
    bool operator!=(const StrBlobPtr &p) {return this->curr!=p.curr;}
    
    const string &deref() const{
        auto p=check(curr,"dereference past end");
        return (*p)[curr];
    }

    StrBlobPtr &incr(){
        check(curr,"increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    weak_ptr<vector<string>> wptr;
    size_t curr;
    shared_ptr<vector<string>> check(StrBlob::size_type sz,const string &msg) const{
        auto ret=wptr.lock();
        if(!ret){
            throw runtime_error("unbound StrBlobPtr");
        }
        if(sz>=ret->size()){
            throw runtime_error(msg);
        }
        return ret;
    }
};

StrBlobPtr StrBlob::begin() 
{
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()  
{
	return StrBlobPtr(*this, data->size());
}


