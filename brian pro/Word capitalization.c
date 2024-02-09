/*Write a program that accepts a string as an input, capitalizes the first 
letter of each word in the string, and then returns the result string.*/
#include <stdio.h>
#include <ctype.h>

void capitalize_first_letter_of_each_word(char *str) {
    if (str != NULL && *str != '\0') {
        *str = toupper(*str);
        for (char *p = str + 1; *p != '\0'; p++) {
            if (isspace(*(p - 1)) && !isspace(*p)) {
                *p = toupper(*p);
            } else {
                *p = tolower(*p);
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    capitalize_first_letter_of_each_word(str);
    printf("Result: %s\n", str);
    return 0;
}