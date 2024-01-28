#include <stdio.h>
void main(){

    /*
        Instructions are of three types in C namely

        1. Type declaration Instructions 
        2. Arithmetic Instructions 
        3. Control flow Instructions
    */

   //Type Declaration Instructions -- reserving memory for variables
   int a;
   float b;
   int j=8; int d = 10;
   double x,y,z;
   a=10;
   int c = 9;

   //Important note :  variables have to initialised before using them in the code 

    //Arithmetic Instructions + - / * % 
    //the numerical values used in the below expression are called as operands 
    // the mathematical symbol used for the computations are calledas operators 
    int i = (3*2)+1;    // i is declared as the resultant of the expression 

    //(3*2)+1 = i; This will result in error as the varibale in which the value has to be stored should be on the left side of the assignment operator 
    // int i = ab ; (it is wrong)
     i = a*b;
     // we dont have exponentiation in C instead we use pow()



}