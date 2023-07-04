#ifndef __CALCUL_H_
#define __CALCUL_H_

#include <iostream>
using namespace std;

class Calculator
{
private:
    int num_sum;
    int num_min;
    int num_mult;
    int num_divi;
public:
    void Init();
    double Add(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    double Div(double a, double b);
    void ShowOpCount();
};

inline double Calculator::Add(double a, double b)
{
    num_sum++;
    return a+b;
}

inline double Calculator::Min(double a, double b)
{
    num_min++;
    return a-b;
}

inline double Calculator::Mul(double a, double b)
{
    num_mult++;
    return a*b;
}

inline double Calculator::Div(double a, double b)
{
    num_divi++;
    return a/b;
}

inline void Calculator::ShowOpCount()
{
    cout<<"덧셈: "<<num_sum<<" 뺄셈: "<<num_min<<" 곱셈: "<<num_mult<<" 나눗셈: "<<num_divi<<endl;
    return;
}


#endif