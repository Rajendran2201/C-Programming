#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter student's name: ");
    scanf("%s", student1.name);

    printf("Enter student's age: ");
    scanf("%d", &student1.age);

    printf("Enter student's roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter student's marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
