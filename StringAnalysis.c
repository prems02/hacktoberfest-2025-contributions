#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(ch)) {
            digits++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\n", vowels, consonants, digits);
    return 0;
}