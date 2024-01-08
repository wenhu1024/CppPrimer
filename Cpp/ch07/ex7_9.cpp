#include <string>
#include <iostream>

using std::string;using std::cin;using std::cout;using std::endl;
using std::istream;using std::ostream;

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

istream &read(istream &is,Person p){
    is >> p.name >> p.add;
    return is;
}

ostream &print(ostream &os,const Person p){
    os << p.name << "  "<< p.add;
    return os;
}
