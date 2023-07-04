#include <iostream>
using namespace std;

void Incr(int &num)
{
    num=num+1;
}

void func2(int &num)
{
    num *= -1;
}

int main(void)
{
    int Input;
    cout<<"입력할 값: ";
    cin>>Input;
    Incr(Input);
    cout<<"1증가 값: "<<Input<<endl;
    
    func2(Input);
    cout<<"부호 바꾼 값: "<<Input<<endl;
    return 0;
}