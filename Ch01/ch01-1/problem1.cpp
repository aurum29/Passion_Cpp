#include <iostream>

int main(void)
{
    int sum = 0;
    for(int i=0;i<=4;i++)
    {
        std::cout<<i+1<<"번째 정수 입력: ";
        int a;
        std::cin>>a;
        sum += a;
    }
    std::cout<<"합계: "<<sum;
}