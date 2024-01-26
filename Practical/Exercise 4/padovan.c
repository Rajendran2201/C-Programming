#include <stdio.h>
int findPadovan(int n){
    if(n==0 || n==1 || n==2){
        return 1;
    }
    return findPadovan(n-2) + findPadovan(n-3);
}
void main(){
    int n,firstValue=1,secondValue=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int ans = findPadovan(n);
        printf("%d\t",ans);
    }
   
    }
