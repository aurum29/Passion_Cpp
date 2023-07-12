#include <iostream>
using namespace std;

class Temporary
{
private:
    int num;
public:
    Temporary(int n) : num(n)
    {
        cout<<"create obj: "<<num<<endl;
    }
    ~Temporary()
    {
        cout<<"destroy obj: "<<num<<endl;
    }
    void ShowTempInfo()
    {
        cout<<"My num is "<<num<<endl;
    }
};

int main(void)
{
    Temporary(100);
    cout<<"********** after make!"<<endl<<endl;
    
    Temporary(200).ShowTempInfo();          // 참조 값을 전달하는 형태로 전달 됌
    cout<<"********** after make!"<<endl<<endl;

    const Temporary &ref=Temporary(300);    // 참조 값이 참조자(ref)에게 전달 됌 -> 임시객체가 메모리에 저장
    cout<<"********** after make!"<<endl<<endl;
    return 0;
}

/*
출력 값
create obj: 100
destory obj: 100
********** after make!

create obj: 200
My num is 200
destory obj: 200
********** after make!

create obj: 300
********** after make!

destory obj: 300        // 이거는 참조가 되었기 때문에 메모리에 남아있는 것이고, 이 때문에 return 시에 소멸됨.
*/