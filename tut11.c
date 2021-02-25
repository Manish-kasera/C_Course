//Logical Operators

// 1. They are used to combine two or more expression  (&&,||)
// 2. or to complement the result.(!) true<--false

/*
   1. ! (Logical Not) 
   1. && (Logical And) 
   2. || (Logical OR)
*/
/*
Note: Every none zero(0) value is true  2,4,8,199,-22, 0(false)
   
  !---->Reverse the result, returns false if the result is true

  && --->Returns true if both expression are true,otherwise false

  ||--->Returns true if one of the expression is true

*/

#include <stdio.h>

int main()
{
  // int x = 10; //true
  // printf("%d\n",x);//10
  // printf("%d\n",!x);// 0

  // int y = 0;          //false
  // printf("%d\n", y);  //0
  // printf("%d\n", !y); //1

  int a = 10, b = 20, c = 30;
  int res = a < b && b > c;//10 < 20 && 20>30// 1 && 0 //0  
  //printf("%d\n", res);

  int res1 = a > b || b > c;//10 > 20 || 20>30// 0 || 0  
  printf("%d\n", res1);
  

  return 0;
}
