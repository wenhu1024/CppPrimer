#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date{
public:
    friend void print(const Date &d);
    Date(){}
    Date(const string &s);
private:
    unsigned yy;
    unsigned mm;
    unsigned dd;    
};

Date::Date(const string &s){
    char cp;
    if(s.find_first_of("/")!=string::npos){
        cp='/';
        //1/1/1990
    }

    if(s.find_first_of(" ")!=string::npos){
        if(s.find_first_of(",")>=4 && s.find_first_of(",")!=string::npos){
            cp=',';
            //January 1, 1900
        }else if(s.find_first_of(" ")>=3){
            cp=' ';
            //Jan 1 1900
        }
    }

    switch(cp){
        case '/'://1/1/1990
            dd=stoi(s.substr(0,s.find_first_of("/")));
            mm=stoi(s.substr(s.find_first_of("/")+1,s.find_last_of("/")));
            yy=stoi(s.substr(s.find_last_of("/")+1,4));
        break;
        case ' '://Jan 1 1900
            if( s.find("Jan") < s.size() )  mm = 1;
            if( s.find("Feb") < s.size() )  mm = 2;
            if( s.find("Mar") < s.size() )  mm = 3;
            if( s.find("Apr") < s.size() )  mm = 4;
            if( s.find("May") < s.size() )  mm = 5;
            if( s.find("Jun") < s.size() )  mm = 6;
            if( s.find("Jul") < s.size() )  mm = 7;
            if( s.find("Aug") < s.size() )  mm = 8;
            if( s.find("Sep") < s.size() )  mm = 9;
            if( s.find("Oct") < s.size() )  mm =10;
            if( s.find("Nov") < s.size() )  mm =11;
            if( s.find("Dec") < s.size() )  mm =12;

            dd=stoi(s.substr(s.find_first_of(" ")+1,s.find_last_of(" ")));
            yy=stoi(s.substr(s.find_last_of(" ")+1,4));
        break;
        case ','://January 1, 1900
            if( s.find("Jan") < s.size() )  mm = 1;
            if( s.find("Feb") < s.size() )  mm = 2;
            if( s.find("Mar") < s.size() )  mm = 3;
            if( s.find("Apr") < s.size() )  mm = 4;
            if( s.find("May") < s.size() )  mm = 5;
            if( s.find("Jun") < s.size() )  mm = 6;
            if( s.find("Jul") < s.size() )  mm = 7;
            if( s.find("Aug") < s.size() )  mm = 8;
            if( s.find("Sep") < s.size() )  mm = 9;
            if( s.find("Oct") < s.size() )  mm =10;
            if( s.find("Nov") < s.size() )  mm =11;
            if( s.find("Dec") < s.size() )  mm =12;

            dd=stoi(s.substr(s.find_first_of(" ")+1,s.find_first_of(",")));
            yy=stoi(s.substr(s.find_last_of(" ")+1,4));
        break;
    }
    
}

void print(const Date &d){
    cout << "yy: " << d.yy << endl;
    cout << "mm: " << d.mm << endl;
    cout << "dd: " << d.dd << endl;
}
int main()
{
    Date d1("1/1/1990");
    print(d1);
    Date d2("Jan 1 1900");
    print(d2);
    Date d3("January 1, 1900");
    print(d3);
    return 0;
}

