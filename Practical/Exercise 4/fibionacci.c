#include <stdio.h>

int main(){
    int n, firstValue = 0,secondValue =1;
    printf("Enter the number of terms :");
    scanf("%d",&n);

    printf("Fibonacci series: %d , %d ,",firstValue,secondValue);

    for(int i=0;i<n;i++){
        int nextTerm = firstValue + secondValue;
        printf("%d , ",nextTerm);
        firstValue = secondValue;
        secondValue = nextTerm;
    }
    
    return 0;
}