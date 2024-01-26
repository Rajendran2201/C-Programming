#include<stdio.h>
void main(){
    // program to find the length of an array 
    int length;
    char word[100];
    printf("Enter the word: ");
    gets(word);
    
    for(int i=0; word[i] != '\0'; i++){
        length++;
    }
    printf("The length of the word is %d",length);
}