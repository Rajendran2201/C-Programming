#include <stdio.h>

char *strcpy(char *str1,  char *str2) {
    char *ptr = str1;

    while (*str2 != '\0') {
        *ptr = *str2;
        ptr++;
        str2++;
    }

    *ptr = '\0';

    return str1;
}

int main() {
    char str1[50];
    char str2[] = "Hello, world!";
    strcpy(str1, str2);

    printf("Copied string: %s\n", str1);

    return 0;
}
