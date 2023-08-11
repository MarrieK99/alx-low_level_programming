Copy code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between -100 and 100
    int n = rand() % 201 - 100;

    // Print the generated number
    printf("The number is: %d\n", n);

    // Check if the number is positive, zero, or negative
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
