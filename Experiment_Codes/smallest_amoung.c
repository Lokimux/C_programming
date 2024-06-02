#include <stdio.h>

int main() {
    int n, num, smallest;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    // Initialize smallest with the first number
    printf("Enter number 1: ");
    scanf("%d", &smallest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Compare current number with the smallest so far
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
