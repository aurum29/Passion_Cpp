#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y)
    { }
    void ShowPosition() const
    {
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
    Point& operator++()
    {
        xpos+=1;
        ypos+=1;
        return *this;
    }
    Point operator-()
    {
        Point P(-xpos, -ypos);
        return P;
    }
    friend Point operator~(Point & pos);
};

Point operator~(Point & pos)
{
    Point P(pos.ypos, pos.xpos);
    return P;
}

int main(void)
{
    Point pos(1, 2);
    pos.ShowPosition();
    
    (-pos).ShowPosition();
    (~pos).ShowPosition();
    return 0;
}