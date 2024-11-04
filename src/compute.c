
int compute_sum(const int *numbers, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *numbers;
        numbers++;
    }
    return sum;
}

float compute_average(const int *numbers, int count) {
    return compute_sum(numbers, count) / (float) count;
}

float compute_moving_average(const int *numbers, int count, int window_size) {
    return compute_average(numbers, window_size);
}



