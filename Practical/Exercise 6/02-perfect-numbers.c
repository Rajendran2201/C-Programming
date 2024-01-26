#include<stdio.h>

int main() {
    // A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.

    int number,res;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(int i=1;i<number;i++){
         res = isPerfectNumber(i);
         if(res == 1){
        printf("%d\t",i);
    }
    }
   
}

int isPerfectNumber(int number){
    int sum = 0;
    
     for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
     if (number == sum) {
        return 1;
    }
    return 0;
}