#include <stdio.h>


/*

Write a C program that takes an integer as input from the user and prints the multiplication table of the number upto 10 

Enter an integer: 9
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90


*/
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
