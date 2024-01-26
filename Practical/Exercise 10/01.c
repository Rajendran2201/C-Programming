#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;

    FILE *filePtr;

    filePtr = fopen("raj.txt", "wb"); 

    if (filePtr == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter age: ");
    scanf("%d",  &student.age);

    printf("Enter marks: ");
    scanf("%f",  &student.marks);

    fwrite( &student, sizeof(struct Student), 1, filePtr);

    fclose(filePtr); 

    printf("File raj.txt created and data stored successfully.\n");

    return 0;
}
