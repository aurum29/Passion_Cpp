#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
    int * arr;
    int arrlen;
    BoundCheckIntArray(const BoundCheckIntArray& arr) { }
    BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) { }

public:
    BoundCheckIntArray(int len) :arrlen(len)
    {
        arr=new int[len];
    }
    int& operator[] (int idx)
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"Array index out of bound exception"<<endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckIntArray() { delete []arr; }
};

void ShowAllData(const BoundCheckIntArray& ref)     // operator[] 는 const 함수가 아니기에 오류 발생
{
    int len = ref.GetArrLen();
    for(int_least32_t idx=0; idx<len; idx++)
        cout<<ref[idx]<<endl;
}

int main()
{
    BoundCheckIntArray arr(5);
    for(int i=0; i<5; i++)
        arr[i]=(i+1)*11;
    
    ShowAllData(arr);
    return 0;
}