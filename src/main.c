#include "compute.h"
#include "file_io.h"
int main() {
    const char *inputname = "input.txt";
    const char *outputname = "output.txt";
    int numbers[MAX_COUNT];
    int count;
    int window_size = 5;
    float moving_average;
    count = read_numbers(inputname, numbers, MAX_COUNT);
    moving_average = compute_moving_average(numbers, count, window_size);
    write_result(outputname, moving_average);
    return 0;
}