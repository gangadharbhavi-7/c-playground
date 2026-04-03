#include <stdio.h>
#include <math.h>

void computeStats(double *arr, int n, double *sum, double *mean, double *stddev) {
    int i;
    *sum = 0.0;

    // Calculate sum
    for (i = 0; i < n; i++) {
        *sum += *(arr + i);
    }

    // Calculate mean
    *mean = *sum / n;

    // Calculate standard deviation
    double variance = 0.0;
    for (i = 0; i < n; i++) {
        variance += pow(*(arr + i) - *mean, 2);
    }
    variance /= n;
    *stddev = sqrt(variance);
}

int main() {
    int n, i;
    double arr[100];
    double sum, mean, stddev;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d real numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    computeStats(arr, n, &sum, &mean, &stddev);

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f", mean);
    printf("\nStandard Deviation = %.2f\n", stddev);

    return 0;
}