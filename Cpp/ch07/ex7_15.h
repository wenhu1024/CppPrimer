#ifndef EX7_4_H
#define EX7_4_h

#include <string>
using std::string;

struct Person{
    string name,add;    
    const string& getName() const;
    const string& getAdd() const;

    Person() =default;   
    Person(const string& n); 
    Person(const string& a);
    Person(const string& n,const string& a);
};

const string& Person::getName() const{
    return this->name;
}

const string& Person::getAdd() const{
    return this->add;
}

Person::Person(const string& n):name(n){};
Person::Person(const string& a):add(a){};
Person::Person(const string& n,const string& a):name(n),add(a){};  
               

#endif
