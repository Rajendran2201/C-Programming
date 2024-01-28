#include <stdio.h>
/*
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.

*/
int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("This is an equilateral triangle.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}
