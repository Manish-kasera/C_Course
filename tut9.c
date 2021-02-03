//Arithmetic Operator

/*
Priortity :
  1. Pre Increment  ,  Pre Decrement  --->  ++//-- before variable
  2. *  /  %(Modulo Operater)
  3. + -
  4. =
  5. Post Increment  , Post Decrement --> ++/-- after variable
*/

#include <stdio.h>

int main()
{
    //int num1 = 20, num2 = 10;

    // int add = num1 + num2;
    // printf("add = %d\n", add);

    // int sub = num1 - num2;
    // printf("sub = %d\n", sub);

    // int mul = num1 * num2;
    // printf("multiply = %d\n", mul);

    // int div = num1 / num2;
    // printf("divide = %d\n", div);

    // int rem = num1 % num2;//20 % 10//0
    // printf("rem = %d",rem);

    int x = 3;
    int y = x; // y-->3
    printf("y =%d x = %d\n", y, x); // 3   3

    y = x++;                         //x = x + 1  //post increment //y-->3  x-->4
    printf("y = %d x = %d\n", y, x); //4

    y = ++x;                         // x = x + 1 //pre increment // y--> 5  x---> 5
    printf("y = %d x = %d\n", y, x); // 5

    return 0;
}