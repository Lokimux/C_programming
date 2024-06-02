#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word is a palindrome
int isPalindrome(char *word) {
    int left = 0;
    int right = strlen(word) - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

// Function to convert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char sentence[256];
    char word[256];
    int palindromeCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Removing newline character from the input if present
    size_t length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

    // Convert the entire sentence to lowercase
    toLowerCase(sentence);

    // Tokenize the sentence into words
    char *delimiters = " ,.-!?;:\"()[]{}"; // Include all punctuation marks
    char *token = strtok(sentence, delimiters);

    printf("Palindrome words: ");
    while (token != NULL) {
        strcpy(word, token);
        if (isPalindrome(word)) {
            printf("%s ", word);
            palindromeCount++;
        }
        token = strtok(NULL, delimiters);
    }

    printf("\nNumber of palindrome words: %d\n", palindromeCount);

    return 0;
}
