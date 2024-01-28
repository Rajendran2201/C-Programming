#include<stdio.h>
int main(){
    /*
    
    int and int ---> int
    int and float ---> float
    float and float ----> float 

    5/2 = 2 ;       5.0/2 = 2.5
    
    */
   //Implicit type conversion
   int a = 3.0/9;
   printf("%d",a);

    float b = 3.0/9;
    printf("%f",b);

   

   //Operator precedence 
    // 1 --> * / %
    //  2 ---> + -
    //  3 ---> =

    /* Assosciativity = the direction in which the expression is evaluated 
    Ternanry, Bitwise and Unary opertaors have a Right to left assosciativity 
    
         whereas all other operators have a Left to right assosciativity 

         Type conversion are of two types and they are 
         i) Implicit type conversion
         ii) Explicit type conversion
    */


   //Explicit type conversion

    int x = (int) 9.4/2;
    printf("The value of x is %d",x);






   return 0;
}