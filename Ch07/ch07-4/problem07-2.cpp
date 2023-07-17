#include <iostream>
using namespace std;

class Rectangle
{
private:
    int a;
    int b;
public:
    Rectangle(int n1, int n2) : a(n1), b(n2)
    { }
    void ShowAreaInfo()
    {
        cout<<"면적: "<<a*b<<endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int n) : Rectangle(n, n)
    { }
};

int main(void)
{
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}