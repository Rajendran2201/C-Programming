#include<stdio.h>
int main(){

int num,count;
printf("Enter the number: ");
scanf("%d",&num);
count = getCount(num);

printf("The number of digits in the given number is %d",count);

    return 0;
}

int getCount(int num){
    if(num==0){
        return 0;
    }
    return 1+getCount(num/10);
}