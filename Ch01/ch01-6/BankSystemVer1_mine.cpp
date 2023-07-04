#include <iostream>

int Menu(void)
{
    int ans;
    std::cout<<"---Menu------"<<std::endl;
    std::cout<<"1. 계좌개설"<<std::endl;
    std::cout<<"2. 입 금"<<std::endl;
    std::cout<<"3. 출 금"<<std::endl;
    std::cout<<"4. 계좌정보 전체 출력"<<std::endl;
    std::cout<<"5. 프로그램 종료"<<std::endl;
    std::cout<<"선택: ";
    std::cin>>ans;
    return ans;
}

namespace Bank
{
    void Make(void);
    void Deposit(void);
    void Withdraw(void);
    void Info(void);
}

struct BankAccount
{
    int ID;
    char UserName[20];
    int money;
}Accounts[100];


int main()
{
    int i;
    while(1)
    {
        i = Menu();
        std::cout<<"\n\n";
        switch(i)
        {
        case 1:
            Bank::Make();
            break;

        case 2:
            Bank::Deposit();
            break;

        case 3:
            Bank::Withdraw();
            break;

        case 4:
            Bank::Info();
            break;

        default:
            std::cout<<"ERROR: NOT available input"<<std::endl;
            break;
        case 5:
            return 0;
        }
        std::cout<<"\n\n";
    }
}

int cnt = 0;

void Bank::Make(void)
{
    std::cout<<"[계좌개설]"<<std::endl;
    std::cout<<"계좌 ID: ";
    std::cin>>Accounts[cnt].ID;
    std::cout<<"이름: ";
    std::cin>>Accounts[cnt].UserName;
    std::cout<<"임금액: ";
    std::cin>>Accounts[cnt].money;
    
    cnt++;
    return;
}

void Bank::Deposit(void)
{
    int ID, Money;
    std::cout<<"[입  금]"<<std::endl;
    std::cout<<"계좌 ID: "; std::cin>>ID;
    std::cout<<"입금액: "; std::cin>>Money;
    for(int i=0;i<100;i++)
    {
        if(Accounts[i].ID == ID)
        {
            Accounts[i].money += Money;
            std::cout<<"입금완료"<<std::endl;
            return;
        }
    }
    std::cout<<"ERROR: There is no account"<<std::endl;
    return;    
}

void Bank::Withdraw(void)
{
    int ID, Money;
    std::cout<<"[출  금]"<<std::endl;
    std::cout<<"계좌 ID: "; std::cin>>ID;
    std::cout<<"출금액: "; std::cin>>Money;
    for(int i=0;i<100;i++)
    {
        if(Accounts[i].ID == ID)
        {
            Accounts[i].money -= Money;
            std::cout<<"입금완료"<<std::endl;
            return;
        }
    }
    std::cout<<"ERROR: There is no account"<<std::endl;
    return;
}

void Bank::Info(void)
{
    for(int i=0;i<cnt;i++)
    {
        std::cout<<"계좌 ID: "<<Accounts[i].ID<<std::endl;
        std::cout<<"이 름: "<<Accounts[i].UserName<<std::endl;
        std::cout<<"잔 액: "<<Accounts[i].money<<std::endl;
        std::cout<<"\n";
    }
    return;
}