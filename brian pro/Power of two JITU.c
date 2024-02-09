/*Write a program that takes an integer as input and returns true if the
 input isa power of two.*/
#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(int n) {
    if (n <= 0) {
        return false;
    }
    while (n != 1) {
        if (n % 2 != 0) {
            return false;
        }
        n = n / 2;
    }
    return true;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_power_of_two(n)) {
        printf("%d is a power of two.\n", n);
    } else {
        printf("%d is not a power of two.\n", n);
    }
    return 0;
}