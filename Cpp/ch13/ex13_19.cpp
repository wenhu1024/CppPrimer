#include <iostream>
#include <string>

using namespace std;

class Employee{
public:
    Employee()=default;
    Employee(const string &N):name(N),id(uniq++){}
    Employee(const Employee &e)=delete;
    static size_t uniq;
private:
    string name;
    size_t id;
};

size_t Employee::uniq=1;

