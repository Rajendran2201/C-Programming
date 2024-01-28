#include<stdio.h>

struct book{
    char name[10];
    char author[20];
    int pages;
    float price;
};

int main(){
    
    
    struct book b1 = {"Alchemist","Paulo Coelho",246,356.8};
    
    printf("\nThe name of the book is %s",b1.name);
     printf("\nThe author of the book is %s",b1.author);
      printf("\nThe pages of the book is %d",b1.pages);
       printf("\nThe price of the book is %f",b1.price);
    
    return 0;
}