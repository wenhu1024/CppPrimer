#ifndef EX7_24_H
#define EX7_24_H

#include <string>
#include <iostream>
using std::string;using std::istream;using std::ostream;using std::cout;using std::cin;

class Screen{
public:
    using pos=string::size_type;
    Screen()=default;
    Screen(pos w,pos h):width(w),height(h),contents(h*w,' '){}
    Screen(pos w,pos h,char ch):width(w),height(h),contents(h*w,ch){}
    char get() const{
        return contents[cursor];
    }
    char get(pos r,pos c) const{
        return contents[r*width+c];
    }
    Screen &set(char ch){
        contents[cursor]=ch;
        return *this;
    }
    Screen &set(pos r,pos c,char ch){
        pos t=r*width;
        contents[t+c]=ch;
        return *this;
    }

    Screen &move(pos r,pos c){
        pos t=r*width;
        cursor=t+c;
        return *this;
    }

    Screen &display(ostream &os){
        do_display(os);
        return *this;
    }
    const Screen& display(ostream &os) const{
        do_display(os);
        return *this;
    }
private:
    string contents;
    pos cursor=0,height=0,width=0;
    void do_display(ostream &os) const{
        os << this->contents;  
    }
};
#endif