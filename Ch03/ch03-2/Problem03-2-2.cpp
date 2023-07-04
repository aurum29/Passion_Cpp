#include <iostream>
#include <cstring>
using namespace std;

namespace Printer_CONST
{
    enum{MAX_LEN=100};
};

class Printer
{
private:
    char string[Printer_CONST::MAX_LEN];
public:
    void SetString(char *InString);
    void ShowString();
};

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love c++");
    pnt.ShowString();
    return 0;
}

inline void Printer::SetString(char *InString)
{
    strcpy(string, InString);
    return;
}

inline void Printer::ShowString()
{
    cout<<string<<endl;
    return;
}