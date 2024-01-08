#include <iostream>
int main()
{
    std::cout << "Enter some numbers:"<< std::endl;
    int value = 0, sum = 0;
    while(std::cin>>value){
        sum += value;
    }
    std::cout << "   The sum: " << sum << std::endl;
    return 0;
}