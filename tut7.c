// INPUT and OUTPUT

// keyboard --> standard input
// moniter -->standard output

/*
  printf()
  -->predfined function
  --> use to print output

  printf("format specifier",variable_name);

  1.print text as it is..
  2.print the value/data of variable...
  3.text and data of variable can be printed in same line..


*/

/*
  scanf()
  -->predefined function
  -->to take input from user..

  scanf("format specifier",address_of_variable);


*/

/*  
   Problem1.  Print sum of two numbers by taking input from the input from user..  
  --> Question on C (playlist) ...problem solution
  
*/

#include <stdio.h>

int main()
{

  printf("Manish Kumar\n");
  printf("Manish Kumar\n");

  int num1 = 20;
  printf("%d\n", num1);
  
  
  //the value of num1 is 20
  printf("the value of num1 is %d\n", num1);

  int x;
  printf("enter the value of x:");
  scanf("%d", &x);
  printf("%d\n", x);

  float y;
  printf("enter the value of y:");
  scanf("%f", &y);
  printf("%.2f", y);

  return 0;
}
