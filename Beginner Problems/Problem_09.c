#include<stdio.h>
/*


Write a C program to find the number of digits of an integer 

Enter an integer: 3452
Number of digits: 4


*/
int main(){


int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Counting the number of digits
    while (number != 0) {
        number /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}