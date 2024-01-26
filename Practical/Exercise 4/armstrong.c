#include <stdio.h>
#include <math.h>
int main(){
    int num, duplicate1,duplicate2,sum=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    duplicate1 = num;
    duplicate2 = num;

    while(duplicate1>0){
        duplicate1/=10;
        count++;
    }

    while(duplicate2>0){
        int rem = duplicate2%10;
        sum += pow(rem,count);
        duplicate2/=10;
    }

    if(sum == num){
        printf("It is an Armstrong Number");
    }else{
        printf("It is not an Armstrong Number");
    }


    return 0;
}