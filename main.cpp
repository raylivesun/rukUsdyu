#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 1000

int count_words(char *input) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; i <= strlen(input); i++) {
        if (isalpha(input[i])) {
            in_word = 1;
        } else if (in_word) {
            in_word = 0;
            count++;
        }
    }

    return count;
}

int main() {
    char input[MAX_INPUT_LENGTH];
    printf("Enter a sentence: ");
    fgets(input, MAX_INPUT_LENGTH, stdin);

    int word_count = count_words(input);
    printf("Number of words: %d\n", word_count);

    return 0;
}
