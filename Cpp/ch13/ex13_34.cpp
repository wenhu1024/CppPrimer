#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

class Folder;

class Message{
public:
    friend class Folder;
    friend void swap(Message &h1,Message &h2);
    explicit Message(const string &s=""):contents(s){}
    Message(const Message &m);
    Message& operator =(const Message &m);
    ~Message();
    void save(Folder &);
    void remove(Folder &);
private:
    string contents;
    set<Folder*> folders;
    void add_to_Folders(const Message &);
    void remove_from_Folders();
    void addFldr(Folder *f) { folders.insert(f); }
    void remFldr(Folder *f) { folders.erase(f); }
};

class Folder{
public:
    friend class Message;
    friend void swap(Folder &, Folder &);
    Folder()=default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
private:
    set<Message*> msg;
    void addMsg(Message *m){msg.insert(m);}
    void remMsg(Message *m){msg.erase(m);}
    void add_to_Message(const Folder&);
    void remove_from_Message();
};

inline
void Message::save(Folder &f){
    folders.insert(&f);
    f.addMsg(this);
}

inline 
void Message::remove(Folder &f){
    folders.erase(&f);
    f.remMsg(this);
}

inline
void Message::add_to_Folders(const Message &m){
    for(auto f:m.folders){
        f->addMsg(this);
    }
}

inline
Message::Message(const Message &m):
    contents(m.contents),folders(m.folders)
{
    add_to_Folders(m);
}
    
inline
void Message::remove_from_Folders(){
    for(auto f:this->folders){
        f->remMsg(this);
    }
}

inline
Message::~Message(){
    remove_from_Folders();
}

inline
Message& Message::operator=(const Message &m){
    remove_from_Folders();
    contents=m.contents;
    folders=m.folders;
    add_to_Folders(m);
    return *this;
}

inline
void swap(Message &h1,Message &h2){
    using std::swap;
    h1.remove_from_Folders();
    h2.remove_from_Folders();
    swap(h1.contents,h2.contents);
    swap(h1.folders,h2.folders);
    h1.add_to_Folders(h1);
    h2.add_to_Folders(h2);
}

inline
void Folder::add_to_Message(const Folder &f){
    for(auto m:f.msg){
        m->addFldr(this);
    }
}

inline
void Folder::remove_from_Message(){
    for(auto m:msg){
        m->remFldr(this);
    }
}

inline
Folder::~Folder(){
    remove_from_Message();
}

inline
Folder::Folder(const Folder& f):
    msg(f.msg)
{
    add_to_Message(*this);
}

inline
Folder& Folder::operator=(const Folder&f){
    remove_from_Message();
    msg=f.msg;
    add_to_Message(f);
    return *this;
}

inline
void swap(Folder &f1,Folder &f2){
    using std::swap;
    f1.remove_from_Message();
    f2.remove_from_Message();
    swap(f1.msg,f2.msg);
    f1.add_to_Message(f1);
    f2.add_to_Message(f2);
}
