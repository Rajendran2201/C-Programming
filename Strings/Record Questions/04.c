#include <stdio.h>
#include <string.h>

void lexicographicalSort(char words[][100], int n) {
    char temp[100];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);

    char words[n][100];

    // Loop to get the words from the user 
    for (int i = 0; i < n; i++) {
        printf("Enter word-%d: ", i + 1);
        scanf("%s", words[i]);
    }

    lexicographicalSort(words, n);

    // loop to print the words in sorted order
    printf("Sorted Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
