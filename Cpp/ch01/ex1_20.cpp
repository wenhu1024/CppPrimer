#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    
    for (Sales_item item; cin >> item; cout << item << endl);
    return 0;
}
//0-201-78345-x 3 20.00
//0-201-78345-x 2 20.00