#include <iostream>

int main()
{
    const int num=12;
    const int *p = &num;
    std::cout<<p<<std::endl;
    return 0;
}