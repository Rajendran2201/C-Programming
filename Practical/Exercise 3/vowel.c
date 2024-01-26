#include <stdio.h>
#include <ctype.h>
int main(){

    char character;

    printf("Enter the character :");
    scanf("%c",&character);
    character = tolower(character);
    switch(character){
        case 'a':
            printf("%c is a vowel",character);
            break;
        case 'e':
            printf("%c is a vowel",character);
            break;
        case 'i':
            printf("%c is a vowel",character);
            break;
        case 'o':
            printf("%c is a vowel",character);
            break;
        case 'u':
           printf("%c is a vowel",character);
            break;
        default : 
            printf("%c is not a vowel",character);
    }



    return 0;
}