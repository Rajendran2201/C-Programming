#include<stdio.h>

int main(){
    int start = 0, end;
    char string[50];

    printf("Enter the string: ");
    gets(string);

    for(int i=0;string[i] != '\0';i++){
        end+=1;
    }
    end -= 1;

    while(start<=end){
    char c = string[start];
    string[start] = string[end];
    string[end] = c;
    
    start++;
    end--;
    }
    printf("Reversed String : %s",string);
    return 0;
}