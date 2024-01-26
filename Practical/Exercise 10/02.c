#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person person;

    FILE *filePtr;

    filePtr = fopen("raj.txt", "rb"); 

    if (filePtr == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fread(&person, sizeof(struct Person), 1, filePtr);

    printf("Details read from file raj.txt:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Salary: %.2f\n", person.salary);

    fclose(filePtr); 

    return 0;
}
