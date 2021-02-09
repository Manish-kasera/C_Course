//Relational Operator
// --> defines some kind of relation between two entities
// 20 > 21  //0

/* Note : relational operators return the integers 0 or 1,
         where 0 stands for false and any non-zero value stands for true.
*/

/* 
   1. > , >= , < , <=
   2.   == (Equal to), !=(Not Equal to)
*/

#include <stdio.h>

int main()
{
   // int num1 = 20 ,num2 = 10;

   // int res;
   // res = num1 > num2; // 20 > 10//1

   // printf("%d\n",res);

   // int res2;
   // res2 = num1 >= num2; // 20 >= 10//1

   // printf("%d\n",res2);

   // int res3;
   // res3 = num1 < num2; // 20 < 10//0

   // printf("%d\n",res3);

   // int res4;
   // res = num1 <= num2; // 20 <= 10//0

   // printf("%d\n",res4);

   // int x = 10, y = 10;

   // int ans = y == x; // 10==10//1
   // printf("%d\n", ans);

   // int ans1 = y != x; // 10!=10//0
   // printf("%d\n", ans1);

   int a = 30, b = 10, c = 3;
   int result = a>b>c;// 30 > 10> 3 // 1>3 //0
   printf("%d\n",result);

   int result2 = a<b>c;// 30 < 10 > 3// 0 > 3 // 0
   printf("%d\n",result2);
   return 0;
}
