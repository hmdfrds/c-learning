#include <limits.h>
#include <stdio.h>

int main() {
    int inputNumber = 0;
    int totalInput = 0;
    int sum = 0;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int even = 0;
    int odd = 0;
    while (1) {
        printf("Enter a positive integer (0 or negative to stop): ");
        scanf("%d", &inputNumber);

        if (inputNumber < 1) {
            break;
        }
        totalInput++;

        if (inputNumber > largest) {
            largest = inputNumber;
        }
        if (inputNumber < smallest) {
            smallest = inputNumber;
        }

        if (inputNumber % 2) {
            odd++;
        } else {
            even++;
        }

        sum += inputNumber;
    }

    printf("--- Analysis Report ---\n");
    printf("Positive numbers entered: %d\n", totalInput);
    printf("Sum of positive numbers: %d\n", sum);
    if (totalInput) {
        printf("Largest positive number: %d\n", largest);
        printf("Smallest positive number: %d\n", smallest);
    } else {
        printf("No positive numbers were entered.\n");
    }
    printf("Even positive numbers: %d\n", even);
    printf("Odd positive numbers: %d\n", odd);

    return 0;
}