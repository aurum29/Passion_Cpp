#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

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
