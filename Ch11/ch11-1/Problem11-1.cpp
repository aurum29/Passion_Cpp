#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
    int bullet;     // 장전된 총알의 수
public:
    Gun(int bnum) : bullet(bnum)
    { }
    void Shot()
    {
        cout<<"BBANG!"<<endl;
        bullet--;
    }
    Gun& operator=(const Gun& ref)
    {
        bullet=ref.bullet;
        return *this;
    }
    void ShowData()
    {
        cout<<bullet;
    }
};

class Police : public Gun
{
private:
    int handcuffs;      // 소유한 수갑의 수
public:
    Police(int bnum, int bcuff)
        : Gun(bnum), handcuffs(bcuff)
    { }
    void PutHandcuff()
    {
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }
    Police& operator=(const Police& ref)
    {
        Gun::operator=(ref);
        handcuffs=ref.handcuffs;
        return *this;
    }
    void ShowData()
    {
        Gun::ShowData();
        cout<<", "<<handcuffs<<endl;
        return;
    }
};

int main(void)
{
    Police pman1(5, 3);     // 총알 5, 수갑3
    Police pman2=pman1;
    pman2.Shot();
    pman2.Shot();
    pman2.PutHandcuff();
    
    pman1.ShowData();
    pman2.ShowData();
    return 0;
}