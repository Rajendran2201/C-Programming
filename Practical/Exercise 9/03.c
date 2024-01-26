#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1 = {"Raj", 18, 43, 95.5}; 
    
    struct Student *ptr = &student1; 
    printf("Accessing struct members using pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Marks: %.2f\n", ptr->marks);
    
    return 0;
}
