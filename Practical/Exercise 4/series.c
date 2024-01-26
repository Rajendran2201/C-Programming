#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(int i=1; i<n+1; i++){
        sum+= (i*10)+2;
    }

    printf("the sum of the series is %d",sum );
    

    return 0;
}