#include <iostream>

int main()
{
    char name[40];
    char phone_num[15];
    std::cout<<"이름: ";
    std::cin>>name;
    std::cout<<"전화번호: ";
    std::cin>>phone_num;

    std::cout<<"이름은 "<<name<<"입니다."<<std::endl;
    std::cout<<"전화번호는 "<<phone_num<<"입니다."<<std::endl;
    
    return 0;
}