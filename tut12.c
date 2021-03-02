/*  ASSIGNMENT OPERATOR

=	Simple assignment
+= -=	Assignment by sum and difference
*= /= %=	Assignment by product, quotient, and remainder

<<= >>=	Assignment by bitwise left shift and right shift
&= ^= |=Assignment by bitwise AND, XOR, and OR

*/

#include <stdio.h>

int main()
{
    int x = 10;

    int y = x; //10
    printf("y = %d\n", y);

    y += x; // y = y+x//10+10//20
    printf("y = %d\n", y);

    y -= x; //y=y-x;; //20-10//10
    printf("y = %d\n", y);

    y %= x; //y=y%x;; //10%10//0
    printf("y = %d\n", y);

    y *= x; //y=y*x;; //0*10//0
    printf("y = %d\n", y);

    y /= x; //y=y/x;; //0/10//0
    printf("y = %d\n", y);

    return 0;
}
