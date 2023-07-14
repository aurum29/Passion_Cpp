#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
    char * name;
    int age;
public:
    MyFriendInfo(char * FriendName, int FriendAge) : age(FriendAge)
    {
        name = new char[strlen(FriendName)+1];
        strcpy(name, FriendName);
    }
    void ShowMyFriendInfo()
    {
        cout<<"이름: "<<name<<endl;
        cout<<"나이: "<<age<<endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
    char * addr;
    char * phone;
public:
    MyFriendDetailInfo(char * FriName, int FriAge, char * FriAddr, char * FriPhone) : MyFriendInfo(FriName, FriAge)
    {
        addr = new char[strlen(FriAddr)+1];
        phone = new char[strlen(FriPhone)+1];
        strcpy(addr, FriAddr);
        strcpy(phone, FriPhone);
    }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        cout<<"주소: "<<addr<<endl;
        cout<<"전화: "<<phone<<endl<<endl;
    }
};

int main(void)
{
    MyFriendDetailInfo a1("Lee", 24, "서울광역시", "010-1234-5678");
    a1.ShowMyFriendDetailInfo();
    return 0;
}