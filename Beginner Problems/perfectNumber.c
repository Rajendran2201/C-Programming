#include<stdio.h>

int main() {
    // A perfect number is a positive integer that is equal to the sum of its proper divisors, 
    //excluding itself.
    // : The divisors of 6 are 1, 2, and 3. Their sum is 1 + 2 + 3 = 6, which equals the number itself. Therefore, 6 is a perfect number.

    int number;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (number == sum) {
        printf("Perfect Number\n");
    } else {
        printf("Not a perfect number\n");
    }

    return 0;
}
