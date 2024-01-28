#include<stdio.h>
int main(){


    char character;
    printf("Enter the character: ");
    scanf("%c",&character);

    if(character >='a' && character<='z'){
        printf("It is a lowercase Character...");
    }else{
        printf("It is not a lowercase Character...");
    }

    return 0;
}