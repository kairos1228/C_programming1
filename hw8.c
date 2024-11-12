#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

double calSD(double arr[], int n) {
    double sum = 0.0;
    double mean, variance = 0.0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;

    return sqrt(variance);

}

int main() {

    double arr[5];
    int n = 5;

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double stddev = calSD(arr, n);
    printf("Standard Deviation = %.3f\n", stddev);

    return 0;
}
