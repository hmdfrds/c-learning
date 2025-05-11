#include <limits.h>
#include <stdio.h>

int main()
{
    int data[] = {27, 82, 45, 19, 63, 91, 8, 53, 76, 30};
    int arrLen = sizeof(data) / sizeof(data[0]);
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    int g50 = 0;
    printf("--- Array Data Alaysis ---\n");
    printf("Array Elements: ");

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d ", data[i]);
        sum += data[i];
        if (data[i] > max)
        {
            max = data[i];
        }
        if (data[i] < min)
        {
            min = data[i];
        }
        if (data[i] > 50)
        {
            g50++;
        }
    }
    float avg = (float)sum / arrLen;

    printf("\nSum of Elements: %d\n", sum);
    printf("Average of Elements: %.2f\n", avg);
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);
    printf("Elements Greater Than 50: %d\n", g50);
    printf("fasfasdfds");

    return 0;
}
