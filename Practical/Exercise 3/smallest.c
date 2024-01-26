#include <stdio.h>
int main(){
    int smallest,num1,num2,num3;
    printf("Enter number-1:");
    scanf("%d",&num1);
    printf("Enter number-2:");
    scanf("%d",&num2);
    printf("Enter number-3:");
    scanf("%d",&num3);
    if(num1>num2 && num2<num3){
        smallest = num2;
    }else if(num3<num1 && num3<num2){
        smallest = num3;
    }else{
       smallest = num1;
    }
    printf("%d is the smallest number",smallest);
    return 0;
}