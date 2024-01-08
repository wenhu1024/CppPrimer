#ifndef EX7_32_H
#define EX7_32_H

#include <iostream>
#include <string>
#include <vector>

using std::cout;using std::cin;using std::endl;using std::string;
using std::vector;

class Screen;

class Window_mgr{
public:
    using ScreenIndex = vector<Screen>::size_type;
    inline void clear(ScreenIndex);
private:
    vector<Screen> screen;
};

class Screen{
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos=string::size_type;
    Screen()=default;
    Screen(pos w,pos h):width(w),height(h),contents(h*w,' '){}
    Screen(pos w,pos h,char ch):width(w),height(h),contents(h*w,ch){}
private:
    string contents;
    pos width=0,height=0,cursor=0;
};
void Window_mgr::clear(ScreenIndex i){
    Screen &s=screen[i];
    s.contents=string(s.height*s.width,' ');
}

#endif