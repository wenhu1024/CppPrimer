#ifndef EX7_4_H
#define EX7_4_h

#include <string>
#include <iostream>
using std::string;using std::istream;using std::ostream;

struct Person{
    friend istream& read(istream &is,Person &p);
    friend ostream& print (ostream &os,const Person &p);
public: 
    Person()=default;
    Person(const string& n); 
    Person(const string& a);
    Person(const string& n,const string& a);

    const string& Person::getName() const{
        return this->name;
    }

    const string& Person::getAdd() const{
        return this->add;
    }    
private:    
    string name,add;    
};

istream& read(istream& is,Person &p){
    is >> p.name >> p.add;
    return is;
}

ostream& print(ostream& os,const Person &p){
    os << p.name << "  " << p.add;
    return os;
}
#endif