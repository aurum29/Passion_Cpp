#include <iostream>

struct Point
{
    int xpos;
    int ypos;

    void MovePos(int x, int y)      // 점의 좌표이동
    {
        xpos += x;
        ypos += y;
        return;
    }

    void AddPoint(const Point &pos) // 점의 좌표증가
    {
        xpos += pos.xpos;
        ypos += pos.ypos;
        return;
    }

    void ShowPosition()             // 현재 x, y 좌표정보 출력
    {
        std::cout<<"["<<xpos<<" ,"<<ypos<<"]"<<std::endl;
        return;
    }
};

int main(void)
{
    Point pos1={12, 4};
    Point pos2={20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition();            // [5, 14] 출력

    pos1.AddPoint(pos2);
    pos1.ShowPosition();            // [25, 44] 춢력
    return 0;
}