// WAP to print the sum of the even numbers of an array  let the array elemenets count is 10
#include<stdio.h>
int main(){
  //type-1 : Initialise with declaration 
  int a[3] = {1,2,3};

  //type -2 : Initialise and then Declare 

int a[3];
      a[0] = 1;
      a[1] = 2;
      a[2] = 3;



  //type -3 
    int a[10];
    int sum=0;

    
    //getting the elements from the user 
    for(int i=0;i<10;i++){
    printf("Enter the value of a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    
    // find the seum of the elements of an array 
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
             sum+=a[i];
        }
        
    }
    
    printf("The sum of the array elements is %d",sum);
   
    
    
}