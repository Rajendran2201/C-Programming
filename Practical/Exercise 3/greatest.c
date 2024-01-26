#include <stdio.h>
int main(){
    int greatest,num1,num2;
    printf("Enter number-1:");
    scanf("%d",&num1);
    printf("Enter number-2:");
    scanf("%d",&num2);
    if(num1>num2){
       greatest = num1;
    }else{
       greatest = num2;
    }
     printf("%d is the greater number",greatest);
     return 0;
    
}