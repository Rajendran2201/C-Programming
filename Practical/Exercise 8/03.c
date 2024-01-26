#include <stdio.h>

int main() {
    int n, i;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements you entered are:\n");
    int *ptr = arr; 

    for (i = 0; i < n; i++) {
        printf("element - %d : %d\n", i, *ptr);
        ptr++; 
    }

    return 0;
}
