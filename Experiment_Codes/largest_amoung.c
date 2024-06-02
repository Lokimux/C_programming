#include <stdio.h>

int main() {
    int n, num, largest;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    // Initialize largest with the first number
    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Compare current number with the largest so far
        if (num > largest) {
            largest = num;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
