#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, mean, standardDeviation = 0.0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float data[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; ++i) {
        scanf("%f", &data[i]);
        sum += data[i];
    }
    
    mean = sum / n;
    
    for(i = 0; i < n; ++i)
        standardDeviation += pow(data[i] - mean, 2);
    
    standardDeviation = sqrt(standardDeviation / n);
    
    printf("Sum = %.2f\n", sum);
    printf("Avg= %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", standardDeviation);
    
    return 0;
}
