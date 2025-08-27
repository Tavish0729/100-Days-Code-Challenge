#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } 
    else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
