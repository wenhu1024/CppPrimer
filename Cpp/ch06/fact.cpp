#include "Chapter6.h"
#include <iostream>

int fact(){
    static int a=0;
    return ++a;
}
int func(int n)
{
    int ans = 1;
    while (n > 1)
    {
        ans *= n--;
    }
    return ans;
}
