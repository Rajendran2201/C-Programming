
#include<stdio.h>
int main(){
    int a[4];

    
    //getting the elements from the user 
    for(int i=0;i<4;i++){
    printf("Enter the value of a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    
    // print the reverse of an array 
    for(int i=3;i>=0;i--){
        printf("%d\t",a[i]);
        
    }
    
  
   
    
    
}