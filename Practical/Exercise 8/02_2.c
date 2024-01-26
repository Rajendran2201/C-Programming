#include <stdio.h>

void addByReference(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    addByReference(&num1, &num2);

    printf("Sum using call by reference: %d\n", num1);

    return 0;
}
