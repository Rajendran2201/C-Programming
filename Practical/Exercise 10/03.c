#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PRINT_MSG(msg) printf("Message: %s\n", msg)
int main() {

    printf("Value of PI: %.5f\n", PI);

    int num = 5, x = 10, y = 20;
    printf("Square of %d is %d\n", num, SQUARE(num));
 
    printf("The maximum of %d and %d is %d\n", x, y, MAX(x, y));

    PRINT_MSG("Hello, this is a custom message!");

    

    return 0;
}
