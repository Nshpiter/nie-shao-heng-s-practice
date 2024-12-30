#include <stdio.h>

int main(void) {
    int counter = 0;
    do {
        printf("Counter: %d\n", counter);
        counter++;
    } while (counter < 5);
    return 0;
}