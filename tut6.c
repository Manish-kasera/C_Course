//Data Type and sizeof()

//primary data type

/*
1.int 
eg.10,-10,0,24,50000


2.float
  eg.3.14,9.3,-8.9

3.double

eg  8.9992,7.5267
  

4.char
  eg 'a' ,'1','%'

5.void
*/

// sizeof()
//--->unsigned int
//-->to find size

//int    range -32000 t0 32000 (approx)  --> %d
//unsigned int   0 - 64000 (approx)  --> %ld

#include <stdio.h>

int main()
{

    int num1 = 10;
    printf("%d\n", num1);

    float pi = 3.14;
    printf("%f\n", pi);

    char ch = 'c';
    printf("%c\n", ch);

    printf("Size of int %ld byte\n", sizeof(int));
    printf("Size of char %ld byte\n", sizeof(char));
    printf("Size of double %ld byte \n", sizeof(double));
    printf("Size of float %ld byte \n ", sizeof(float));

    return 0;
}