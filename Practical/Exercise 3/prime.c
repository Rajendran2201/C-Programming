#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    for(int i=2;i*i <= num; i++){
        if(num%i==0){
            printf("%d is a Composite number",num);
            return 0;
        }
    }
    printf("%d is a Prime number",num);
    return 0;


}
