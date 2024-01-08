#include <iostream>
#include <string>
#include <utility>
#include <memory>
#include <initializer_list>

using namespace std;

class StrVec{
public:
    StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(initializer_list<string> s);
    StrVec(const StrVec &);
    StrVec& operator=(const StrVec &);
    ~StrVec();
    void push_back(const string &);
    size_t capacity(){return cap-elements;}
    size_t size() const{return first_free-elements;}
    string *begin() const{return elements;}
    string *end() const{return first_free;}
    void reserve(size_t);
    void resize(size_t);
    void resize(size_t,const string &);
    
private:
    static allocator<string> alloc;
    string *elements;
    string *first_free;
    string *cap;
    pair<string*,string*> alloc_n_copy(const string *,const string *);
    void chk_n_alloc(){if(size()==capacity()){reallocate();}}
    void free();
    void reallocate();
};


                                  
void StrVec::push_back(const string &s){
    chk_n_alloc();
    alloc.construct(first_free++,s);
}


pair<string*,string*> StrVec::alloc_n_copy(const string *b,const string *e){
    auto data=alloc.allocate(e-b);
    return {data,uninitialized_copy(b,e,data)};
}


void StrVec::free(){
    if(elements){
        for(auto p=first_free;p!=elements;){
            alloc.destroy(--p);
        }
        alloc.deallocate(elements,cap-elements);
    }
}


StrVec::StrVec(const StrVec& v){
    auto newdata=alloc_n_copy(v.begin(),v.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
}


StrVec::~StrVec(){
    free();
}


StrVec& StrVec::operator=(const StrVec& v){
    auto newdata=alloc_n_copy(v.begin(),v.end());
    free();
    elements=newdata.first;
    cap=first_free=newdata.second;
    return *this;
}

void StrVec::reallocate(){
    auto newcapacity=size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest=newdata;
    auto elem=elements;
    for(size_t i=0;i!=size();i++){
        alloc.construct(dest++,std::move(*elem++));
    }
    free();
    elements=newdata;
    first_free=dest;
    cap=newcapacity+elements;
}



void StrVec::reserve(size_t i){
    if( i > capacity()){
        auto newdata=alloc.allocate(i);
        auto dest=newdata;
        auto elem=elements;
        for(size_t n=0;n!=size();n++){
            alloc.construct(dest++,std::move(*elem++));
        }
        free();
        elements=newdata;
        first_free=dest;
        cap=newdata+i;
    }
}


void StrVec::resize(size_t i){
    resize(i,string());
}


void StrVec::resize(size_t i,const string &s){
    if(i>size()){
        if(i>capacity()){
            reserve(2*i);
        }
        for(size_t n=size();n!=i;++n){
            alloc.construct(first_free++,s);
        }
    }else if(i<size()){
        while(first_free!=elements+i){
            alloc.destroy(--first_free);
        }
    }
}


StrVec::StrVec(initializer_list<string> il){
    auto newdata=alloc_n_copy(static_cast<const string*>(il.begin()),static_cast<const string*>(il.end()));
    elements=newdata.first;
    cap=first_free=newdata.second;
}
allocator<string> StrVec::alloc;
int main()
{
    StrVec vec{"2345"};
    vec.push_back("123");
    cout<<vec.size()<<" ";
    cout<<vec.capacity();
    cout <<*vec.begin();
     vec.resize(1);
    cout <<*vec.end();
    // cout<<vec.size()<<" "<<vec.capacity()<<" "<<*vec.begin()<<" "<<*vec.end()<<"\n";
    // vec.resize(1);
    // cout<<" "<<vec.capacity()<<" "<<*vec.begin()<<" "<<vec.end();


    return 0;
}
