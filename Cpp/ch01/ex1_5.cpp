#include <iostream>
int main()
{   
    std::cout << "Enter the numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The time of ";
    std::cout << v1 ;
    std::cout << " and " ;
    std::cout << v2;
    std::cout <<" is ";
    std::cout << v1*v2<< std::endl;
    return 0;
}