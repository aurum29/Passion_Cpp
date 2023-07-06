#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo() const
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Ring
{
private:
    Point inner;
    Point outer;
    int inner_radius;
    int outer_radius;
public:
    void Init(int x1, int y1, int r1, int x2, int y2, int r2)
    {
        inner.Init(x1, y1);
        outer.Init(x2, y2);
        inner_radius=r1;
        outer_radius=r2;
        return;
    }
    void ShowRingInfo() const
    {
        cout<<"Inner Circle Info..."<<endl;
        cout<<"radius: "<<inner_radius<<endl;
        inner.ShowPointInfo();
        cout<<"Outter Circle Info..."<<endl;
        cout<<"radius: "<<outer_radius<<endl;
        outer.ShowPointInfo();
        return;
    }
};

int main(void)
{
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}