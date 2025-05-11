#include <limits.h>
#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double calculateAverage(int arr[], int size)
{
    int sum = calculateSum(arr, size);
    return (double)sum / size;
}

int findMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int countAboveThreshold(int arr[], int size, int thresholdValue)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > thresholdValue)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int data[] = {27, 82, 45, 19, 63, 91, 8, 53, 76, 30};
    int dataSize = sizeof(data) / sizeof(data[0]);
    int thresholdValue = 50;

    printf("--- Modular Array Data Analysis ---\n");
    printf("Array Elements: ");
    printArray(data, dataSize);
    printf("\nSum of Elements: %d\n", calculateSum(data, dataSize));
    printf("Average of Elements: %.2f\n", calculateAverage(data, dataSize));
    printf("Maximun Value: %d\n", findMax(data, dataSize));
    printf("Minimun Value: %d\n", findMin(data, dataSize));
    printf("Elements Greater Than %d: %d\n", thresholdValue,
           countAboveThreshold(data, dataSize, thresholdValue));

    return 0;
}
