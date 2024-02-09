/*Write a program that prints the numbers from 1 to 100. For multiple of 3,
 print "Fizz"; for multiples of 5, print "Buzz"; and for numbers that are 
 both multiples of 3 and 5, print "FizzBuzz".*/
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        int fizz = (i % 3 == 0);
        int buzz = (i % 5 == 0);
        if (fizz && buzz) {
            printf("FizzBuzz\n");
        } else if (fizz) {
            printf("Fizz\n");
        } else if (buzz) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}