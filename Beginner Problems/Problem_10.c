#include<stdio.h>
/*


Write a C program to find the factors of an integer 

Enter a positive integer: 60
Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60


*/
int main(){


    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(int i=1;i<number+1;i++){
        if(number%i==0){
            printf("%d \t",i);
        }
    }



    return 0;
}