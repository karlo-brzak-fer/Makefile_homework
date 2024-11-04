#include <stdio.h>
int read_numbers(const char *filename, int *numbers, int max_count) {
    FILE *input = NULL;
    input = fopen(filename, "r");
    if (input == NULL) {
        return -1;
    }
    int broj;
    int count = 0;
    while (fscanf(input, "%d", &broj) == 1) {
        if (count == max_count) {
            break;
        }
        *(numbers + count) = broj;
        count++;
    }
    fclose(input);
    return count;
}

int write_result(const char *filename, float result) {
    FILE *output = NULL;
    output = fopen(filename, "w");
    if (output == NULL) {
        return -1;
    }
    if (fprintf(output, "%f\n", result) < 0) {
        return -1;
    }
    return 0;
}