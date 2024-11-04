#include "compute.h"
#include <stdio.h>

int main() {
    int numbers[7] = {3, 5, 7, 6, 3, 2, 9};
    int count = 7;
    int window_size = 5;
    float result;
    int sum;
    sum = compute_sum(numbers, count);
    printf("Sum: %d\n", sum);
    result = compute_average(numbers, count);
    printf("Average: %f\n", result);
    result = compute_moving_average(numbers, count, window_size);
    printf("Moving average of %d: %f\n", window_size, result);
    return 0;
}


