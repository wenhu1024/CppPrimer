#include <iostream>
#include <string>

using namespace std;

class TreeNode{
public:
    TreeNode(const string &s=string()):
        value(s),count(new int(1)),left(nullptr),right(nullptr){}
    TreeNode(const TreeNode &p):
        value(p.value),count(p.count),left(p.left),right(p.right){++*count;}
    TreeNode& operator=(const TreeNode &p){
        ++*p.count;
        if(--*count==0){
            delete count;
            delete left;
            delete right;
        }
        value=p.value;
        count=p.count;
        left=p.left;
        right=p.right;
    }    
    ~TreeNode(){
        if(--*count==0){
            delete count;
            delete left;
            delete right;
        }
    }   
private:
    string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};



class BinStrTree {
public:
    BinStrTree() : root(new TreeNode()) { }
    BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) { }
    BinStrTree& operator=(const BinStrTree &bst);
    ~BinStrTree() { delete root; }

private:
    TreeNode *root;
};