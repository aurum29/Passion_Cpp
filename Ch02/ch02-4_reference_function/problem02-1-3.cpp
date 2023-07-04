#include <iostream>

void SwapPointer(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    return;
}

int main()
{
    int num1=5;
    int *ptr1=&num1;
    int num2=10;
    int *ptr2=&num2;

    SwapPointer(ptr1, ptr2);
    std::cout<<*ptr1<<" "<<*ptr2<<std::endl;
    return 0;
}