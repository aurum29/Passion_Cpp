#include <iostream>
using  namespace std;

namespace CAR_CONSTANT
{
    enum
    {
        ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
        ACC_STEP = 10, BRK_STEP = 10
    };
}

class Car
{
private:
    char gamerID[CAR_CONSTANT::ID_LEN];   //소유자 ID
    int fuelGauge;          //연료량
    int curSpeed;           //현재속도
public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();    // 상태정보 출력
    void Accel();           // 엑셀, 속도증가
    void Break();           // 브레이크, 속도감소
};

void Car::InitMembers(char * ID, int fuel)
{
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}
void Car::ShowCarState()
{
    cout<<"소유자ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelGauge<<"%"<<endl;
    cout<<"현재속도: "<<curSpeed<<"km/s"<<endl;
}
void Car::Accel()
{
    if(fuelGauge<=0)
        return;
    else
        fuelGauge -= CAR_CONSTANT::FUEL_STEP;

    if(curSpeed+CAR_CONSTANT::ACC_STEP>=CAR_CONSTANT::MAX_SPD)
    {
        curSpeed=CAR_CONSTANT::MAX_SPD;
        return;
    }
    
    curSpeed+=CAR_CONSTANT::ACC_STEP;
}
void Car::Break()
{
    if(curSpeed<CAR_CONSTANT::BRK_STEP)
    {
        curSpeed=0;
        return;
    }
    curSpeed-=CAR_CONSTANT::BRK_STEP;
}

int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}