#ifndef EX7_4_H
#define EX7_4_h

#include <string>
using std::string;

struct Person{
    string name,add;    
    const string& getName() const;
    const string& getAdd() const;
};

const string& Person::getName() const{
    return this->name;
}

const string& Person::getAdd() const{
    return this->add;
}

#endif