#include<stdio.h>

void reverse(char word[],int start,int end){
    if(start>=end){
        return;
    }
    char c = word[start];
    word[start] = word[end];
    word[end] = c;
    reverse(word,start+1,end-1);
}

int main(){
    int start = 0, end;
    char word[50];
    printf("Enter the word: ");
    gets(word);
    for(int i=0;word[i] != '\0';i++){
        end+=1;
    }
    reverse(word,start,end-1);
    printf("Reversed word : %s",word);
}