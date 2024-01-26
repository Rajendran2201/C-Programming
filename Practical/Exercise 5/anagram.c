#include <stdio.h>
#include<stdbool.h>

void bubbleSort(char arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
}

int main() {
    int size, count = 0;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    char arr1[size], arr2[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the element of arr1[%d]: ", i);
        scanf(" %c", &arr1[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("Enter the element of arr2[%d]: ", i);
        scanf(" %c", &arr2[i]);
    }

    bubbleSort(arr1, size);
    bubbleSort(arr2, size);

    bool isAnagram = true;
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram) {
        printf("It is an anagram\n");
    } else {
        printf("It is not an anagram\n");
    }

    return 0;
}
