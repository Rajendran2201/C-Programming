#include<stdio.h>


/*

Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.


Test Data : 7 9
Expected Output : First quadrant.


*/
int main() {
    int x, y;
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("First Quadrant");
    } else if (x < 0 && y > 0) {
        printf("Second Quadrant");
    } else if (x < 0 && y < 0) {
        printf("Third Quadrant");
    } else {
        printf("Fourth Quadrant");
    }

    return 0;
}
