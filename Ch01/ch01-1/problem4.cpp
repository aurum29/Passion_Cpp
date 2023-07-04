#include <iostream>

int main()
{
    int i;
    int profit;
    do
    {
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>profit;
        if (profit !=-1)
            std::cout<<" 이번 달 급여: "<<50+profit*0.12<<"만원"<<std::endl;
    } while (profit != -1);
    std::cout<<"프로그램을 종료합니다.";
    return 0;
}