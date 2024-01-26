#include <stdio.h>

int main() {
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("Pointer: Demonstrate the use of & and * operator:\n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("Using & operator:\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    return 0;
}
