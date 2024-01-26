#include<stdio.h>
void main(){
    int arr[4] = {1,2,3,4};
    
    int start = 0;
    int end = 3;
    
    while(start<end){
       int temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
    }
    
    for(int i=0;i<4;i++){
        printf("%d\t",arr[i]);
    }
}