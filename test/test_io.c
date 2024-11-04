#include "file_io.h"
#include <stdio.h>
int main() {
    const char *inputname = "input.txt";
    const char *outputname = "output.txt";
    int count;
    int numbers[MAX_COUNT];
    int status;
    count = read_numbers(inputname, numbers, MAX_COUNT);
    if (count == -1) {
        printf("Input file doesn't exist");
        return 0;
    }
    status = write_result(outputname, (float)numbers[0]);
    if (status == -1) {
        printf("Output error");
    }
    return 0;
}