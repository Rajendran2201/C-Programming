#include<stdio.h>
/*

Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.


Test Data : -5
Expected Output : -1

*/
int main(){

    int number;

    printf("Enter the number:");
    scanf("%d",&number);
    if(number>0){
        printf("1");
    }else if(number<0){
        printf("-1");
    }else{
        printf("0");
    }





    return 0;
}