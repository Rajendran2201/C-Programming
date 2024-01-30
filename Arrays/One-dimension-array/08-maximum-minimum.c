// Find the maximum and minimum element in an array 
#include<stdio.h>
int main(){
    int a[10];


    
    //getting the elements from the user 
    for(int i=0;i<10;i++){
    printf("Enter the value of a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    
    int max = a[0], min = a[0];
    
    for(int i=0;i<10;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    
    printf("\n\n\nThe maximum element in te array is %d",max);
     printf("\nThe minimum element in te array is %d",min);
 
}