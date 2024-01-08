#include <iostream>
int main()
{
    int currVal = 0 ,val = 0, cnt = 0;
    std::cout<<"fuck"<<std::endl;
    if(std::cin >> currVal){
        cnt = 1;
        while(std::cin>>val){
            if(currVal==val){
                ++cnt;
            }else{
                std::cout<<currVal<<" occurs "<<cnt<<std::endl;
                currVal = val;
                cnt=1;
            }
        }
        
         std::cout<<currVal<<" occurs "<<cnt<<std::endl;
        
   }
  
    return 0;
}