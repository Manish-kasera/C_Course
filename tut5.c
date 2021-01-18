// Variable and Format Specifier

/*

Variable --> Storage place,which has some memory..
variable is used to store data..

data-->age,phone_no,name,roll no,etc...

*/

/*
   Rules For Writing Variable Name:

   1.A variable can have alphabets, digits, and underscore.
   
   2.A variable name can start with the alphabet, and
    underscore only. It can’t start with a digit.
    eg..  _abc  abc 
    1ab(x)
    @acc(x) 

   3.No whitespace is allowed within the variable name.
   num 1(x) num_1  num1

   4.A variable name must not be any reserved word or keyword,
    e.g. for int, ,while,if etc.

*/

#include <stdio.h>

int main()
{

    int num1 = 20; //statement



    int num2 = 30;
    int sum = num1 + num2; //50

    //sum of 20 and 30 is 50

    printf("sum of %d and %d is %d",num1,num2,sum);
  

    return 0;
}

//Format Specifier -->>used in input and output
/*
  %d -->int
  %f -->float
  %c  ->>char
  %s  -->string
  %lf  -->>double

*/