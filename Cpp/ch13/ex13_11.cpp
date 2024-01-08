#include <string>

using namespace std;

class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr & p) :ps(new string(*p.ps)),i(p.i){}   
    HasPtr & operator=(const HasPtr &p){
        if(this==&p){
            return *this;
        }
        delete ps;
        ps=new string(*p.ps);
        i=p.i;
        return *this;
    } 
    ~HasPtr(){
        delete ps;
    }
private:
	std::string *ps;
	int i;
};

