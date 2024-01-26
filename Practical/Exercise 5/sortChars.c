#include<stdio.h>
void main(){
    char arr[5]= {'a','b','g','d','j',};
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            char c = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = c;
        }
    }
    
    for(int i=0;i<5;i++){
        printf("%c\t",arr[i]);
    }
}