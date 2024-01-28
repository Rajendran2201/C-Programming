#include<stdio.h>
/*

Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote. (Eligibility for voting is 18 years)

Test Data : 21
Expected Output :
Congratulation! You are eligible 


*/
int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<18){
        printf("Sorry, You're not eligible for voting");
    }else{
        printf("Congratulations, You're eligible for voting");
    }




    return 0;
}