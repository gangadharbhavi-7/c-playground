#include <stdio.h>
#include <math.h>

// Function to compute sine using Taylor series
double taylor_sin(double x, int terms) {
    double result = 0.0, term = x;
    int sign = 1;
    for (int i = 1; i <= terms; i++) {
        result += sign * term;
        term *= (x * x) / ((2 * i) * (2 * i + 1));
        sign = -sign;
    }
    return result;
}

// Function to compute cosine using Taylor series
double taylor_cos(double x, int terms) {
    double result = 1.0, term = 1.0;
    int sign = -1;
    for (int i = 1; i <= terms; i++) {
        term *= (x * x) / ((2 * i - 1) * (2 * i));
        result += sign * term;
        sign = -sign;
    }
    return result;
}

int main() {
    double x;
    int terms = 10; // number of terms in series

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    double sinx = taylor_sin(x, terms);
    double cosx = taylor_cos(x, terms);
    double approx = sinx / cosx;

    double builtin = tan(x);

    printf("\nUsing Taylor series (10 terms): %.6f", approx);
    printf("\nUsing built-in tan(x): %.6f", builtin);

    if (fabs(approx - builtin) < 0.001)
        printf("\nInference: Taylor approximation is very close to built-in function.\n");
    else
        printf("\nInference: Approximation differs; increase terms for better accuracy.\n");

    return 0;
}