#include <iostream>
#include <string>

using namespace::std;

class Shape{
public:
    using Coordinate=pair<double,double>;
    Shape()=default;
    Shape(const string &n):name(n){}
    
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape()=default;
private:
    string name;
};

class Rectangle:public Shape{
public:
    Rectangle()=default;
    Rectangle(const string &n,const Coordinate &a,const Coordinate &b,
        const Coordinate &c,const Coordinate &d):
        Shape(n),a(a),b(b),c(c),d(d) {}
    ~Rectangle()=default;
protected:
    Coordinate a;
    Coordinate b;
    Coordinate c;
    Coordinate d;
};

class Square:public Rectangle{
public:
    Square()=default;
    Square(const string &n,const Coordinate &a,const Coordinate &b,
        const Coordinate &c,const Coordinate &d):
        Rectangle(n,a,b,c,d){}
    ~Square()=default;
};

int main()
{
    return 0;
}