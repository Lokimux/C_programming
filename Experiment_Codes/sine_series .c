#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sine_series(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return sum;
}

int main() {
    double angle;
    int terms;

    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

    double sine_value = sine_series(angle, terms);

    printf("The sine of %.2lf radians is: %.4lf\n", angle, sine_value);

    return 0;
}
