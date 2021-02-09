#include<stdio.h>

int main()
{
    int x = 4;
    int y;
    y = ++x;
    x++;
    printf("x = %d y = %d\n", x, y);

    y = x++;
    printf("x = %d y = %d\n", x, y);

    return 0;
}
