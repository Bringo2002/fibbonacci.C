/*Write a program that takes an integer as input and returns an integer with
 reversed digit ordering.*/
 #include <stdio.h>

int reverse_digits(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Reversed: %d\n", reverse_digits(n));
    return 0;
}