#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float num[100], sum = 0.0, mean, std_dev = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        std_dev += pow(num[i] - mean, 2);
    }

    std_dev = sqrt(std_dev / n);

    printf("Sum = %.2f\n", sum);
    printf("Avg = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", std_dev);

    return 0;
}
    