#include <iostream>

int main()
{
    int num;
    std::cout<<"몇 단의 구구단을 출력: ";
    std::cin>>num;
    for(int i=1;i<=9;i++)
    {
        std::cout<<i<<"X"<<num<<"="<<i*num<<std::endl;
    }
}