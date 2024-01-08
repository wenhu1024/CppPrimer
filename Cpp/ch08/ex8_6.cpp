#include <iostream>
#include <fstream>
#include "../ch07/ex7_40.h"

using namespace std;

int main(int argc,char **argv){
    ifstream in(argv[1]);
    ofstream out(argv[2]);

    Sales_data total;
    if(read(in,total)){
        Sales_data tran;
        while(read(in,tran)){
            if(total.isbn()==tran.isbn()){
                total=add(total,tran);
            }else{
                print(out,total)<<endl; 
                total=tran;
            }
        }
        print(out,total)<<endl;
    }else{
        cout<<"No data?\n";
    }
    
    in.close();
    return 0;
}