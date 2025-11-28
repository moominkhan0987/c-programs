#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any whitespace

    // Convert to lowercase for simplified comparison
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    // Check if ch is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}