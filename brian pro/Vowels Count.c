/*Write a program that counts the number of vowels in a sentence.*/
#include <stdio.h>
#include <ctype.h>

int count_vowels(const char *str) {
    int count = 0;
    for (const char *p = str; *p != '\0'; p++) {
        char ch = tolower(*p);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int vowel_count = count_vowels(str);
    printf("Number of vowels: %d\n", vowel_count);
    return 0;
}