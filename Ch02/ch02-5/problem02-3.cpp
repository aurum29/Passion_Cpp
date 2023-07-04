#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *p;
    p->xpos = p1.xpos+p2.xpos;
    p->ypos = p1.ypos+p2.ypos;
    return *p;
}

int main()
{
    Point * P1 = new Point;
    Point * P2 = new Point;
    P1->xpos=3;
    P1->ypos=30;
    P2->xpos=70;
    P2->ypos=7;
    Point &pp = PntAdder(*P1, *P2);
    delete P1;
    delete P2;
    cout<<pp.xpos<<" "<<pp.ypos<<endl;
    return 0;
}