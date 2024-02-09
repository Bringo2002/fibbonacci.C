/*Write aprogram to generate the Fibonacci sequence up to 100*/
#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int next;

    do {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    } while (next < 100);

    return 0;
}