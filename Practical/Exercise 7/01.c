#include <stdio.h>
#include <string.h>

int main() {
    int vowels_count = 0, consonants_count = 0, digits_count = 0, whitespaces_count = 0;
    char vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    char sentence[100];

    printf("Enter the Sentence: ");
    gets(sentence);

    // Count the number of vowels in the sentence 
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (strchr(vowels, sentence[i]) != NULL) {
            vowels_count++;
        }
    }

    // Count the number of Consonants in the sentence 
    for (int i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')) {
            if(strchr(vowels,sentence[i]) == NULL){
            consonants_count++;
        }
        }
    }
    
    // Count the number of Digits 
     for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i]>='0' && sentence[i] <='9') {
            digits_count++;
        }
    }
    
    // Count the number of whiteSpaces 
     for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            whitespaces_count++;
        }
    }
     printf("Number of vowels: %d\n", vowels_count);
     printf("Number of consonants: %d\n", consonants_count);
     printf("Number of digits: %d\n", digits_count);
     printf("Number of spaces: %d\n", whitespaces_count);

    return 0;
}
