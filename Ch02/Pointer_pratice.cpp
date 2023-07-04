#include <stdio.h>

int main()
{
    char a[8];
    char *ptr;

    for(int i=0;i<8;i++)
    {
        a[i]='a'+i;
    }

    *ptr = a[0];
    printf("%c\n", *ptr);
    printf("%s\n", ptr);
    printf("%s\n", a);
    ptr = ptr + 3;
    printf("%c\n", *ptr);

    return 0;
}