#include<stdio.h>

int main(){

    int num,fact;
    printf("Enter the number: ");
    scanf("%d",&num);

    fact = findFactorial(num);

    printf("The factorial of the number is %d",fact);



    return 0;
}
int findFactorial(int num){
    if(num==0){
        return 1;
    }
    return num*findFactorial(num-1);
}