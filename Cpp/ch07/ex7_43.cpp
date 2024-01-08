class NoDefault{
public:
    NoDefault(int a):num(a){}
private:
    int num;
};

class C{
public:
    C():no(0){}
private:
    NoDefault no;
};