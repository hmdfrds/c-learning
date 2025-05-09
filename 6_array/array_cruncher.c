#include <limits.h>
#include <stdio.h>

int main() {
    int data[] = {27, 82, 45, 19, 63, 91, 8, 53, 76, 30};
    int arrLen = sizeof(data) / sizeof(data[0]);
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < arrLen; i++) {
        printf("%d ", data[i]);
        sum += data[i];
        if (data[i] > max) {
            max = data;
        }
        if (data[i] < min) {
            min = data;
        }
    }
    float avg = (float)sum / arrLen;

    return 0;
}