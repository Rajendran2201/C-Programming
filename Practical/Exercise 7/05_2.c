#include <stdio.h>

int strcmp( char *str1,  char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main() {
     char str1[] = "hello";
     char str2[] = "world";

    int result = strcmp(str1, str2);

    printf("%d",result);

    return 0;
}
