#include <stdio.h>

int main() {
    float salary, incomeTax;

    printf("Enter your salary (in Lakhs): ");
    scanf("%f", &salary);

    if (salary < 0) {
        printf("You have to pay no tax\n");
    } else if (salary > 2.5 && salary < 5) {
        incomeTax = (5.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    } else if (salary > 5 && salary < 10) {
        incomeTax = (7.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    } else if (salary > 10 && salary < 12.5) {
        incomeTax = (10.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    } else if (salary > 12.5 && salary < 15) {
        incomeTax = (12.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    } else if (salary > 15 && salary < 20) {
        incomeTax = (15.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    } else {
        incomeTax = (17.0 / 100) * salary;
        printf("Your income tax amount is %f\n", incomeTax);
    }

    return 0;
}
