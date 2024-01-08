#include <iostream>

class Y;
class X{
private:
    int x;
    Y *p=nullptr;    
};

class Y{
private:
    int y; 
    X t;   
};

