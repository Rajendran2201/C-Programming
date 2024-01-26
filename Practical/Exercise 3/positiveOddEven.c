#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0){
        if(num%2==0){
            printf("%d is a Positive Even Number",num);
        }else{
            printf("%d is a Positive Odd Number",num);
        }
    }else{
         if(num%2==0){
            printf("%d is a Negative Even Number",num);
        }else{
            printf("%d is a Negative Odd Number",num);
        }
        return 0;
    }
    
     
    
}