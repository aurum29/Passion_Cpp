#include <iostream>

inline int SQUARE(int x)    // inline 함수를 이용해서 일반적인 함수 호출보다 더 빠르게 호출 가능하다.
{
    return x*x;
}

int main(void)
{
    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;
    return 0;
}