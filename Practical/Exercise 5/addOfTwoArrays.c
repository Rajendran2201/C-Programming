#include<stdio.h>
void main(){
    int num1,num2,greatest;
    printf("Enter the number of elements of array1: ");
    scanf("%d",&num1);
     printf("Enter the number of elements of array2: ");
    scanf("%d",&num2);
    //find the largest size 
    if(num1>num2){
        greatest=num1;
    }else{
        greatest = num2;
    }
    int arr1[greatest],arr2[greatest];
    for(int i=0;i<greatest;i++){
        arr1[i] =0;
    }
     for(int i=0;i<greatest;i++){
        arr2[i] =0;
    }
    for(int i=0;i<num1;i++){
        printf("Enter the elements of arr1[%d] : ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<num2;i++){
        printf("Enter the elements of arr2[%d] : ",i);
        scanf("%d",&arr2[i]);
    }
    
    printf("The sum of the two arrays are\t");
    for(int i=0;i<num1;i++){
        printf("%d\t",arr1[i]+arr2[i]);
    }

}