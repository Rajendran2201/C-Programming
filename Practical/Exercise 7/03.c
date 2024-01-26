#include<stdio.h>
void main(){
    
    char sentence[100];
    printf("Enter the string: ");
    gets(sentence);
    
    for(int i=0; sentence[i] != '\0' ; i++){
        if ((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')){
            printf("%c",sentence[i]);
        }
    }
}