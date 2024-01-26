#include<stdio.h>
int main(){
    char str[50];
    int vow = 0, cont = 0, num = 0, whi = 0, i,vowel;
    printf("Enter a string:");
    gets(str);
    for(i=0;i<str[i];i++){
        vowel = 0;
        if(str[i]=='a' ||str[i]=='A' ||str[i]=='e' ||str[i]=='E' ||str[i]=='i' ||str[i]=='I' ||str[i]=='o' ||str[i]=='O' ||str[i]=='u' ||str[i]=='U'){
            vowel = 1;
            vow++;
        }else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            if(vowel !=1){
            cont++;
        }}
    }
    printf("\nNumber of Vowels = %d",vow);
    printf("\nNumber of consonants = %d",cont);
     for(i=0;i<str[i];i++){
        if(str[i]=='1' ||str[i]=='2' ||str[i]=='3' ||str[i]=='4' ||str[i]=='5' ||str[i]=='6' ||str[i]=='7' ||str[i]=='8' ||str[i]=='9' ||str[i]=='0'){
            num++;
        }else if (str[i]==' '){
            whi++;
        }
    }
     printf("\nNumber of digits = %d",num);
     printf("\nNumber of white spaces = %d",whi);
}