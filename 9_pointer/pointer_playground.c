#include <stdio.h>

void multiplyByTwo(int *ptr_to_int)
{
    *ptr_to_int *= 2;
}

int main()
{
    int num = 42;
    double pi = 3.14159;
    int *p_num = &num;
    double *p_pi = &pi;

    printf("The value of num: %d\n", num);
    printf("The value of p_num: %p\n", p_num);
    printf("The value of pi: %f\n", pi);
    printf("The value of p_pi: %p\n", p_pi);

    *p_num = 99;
    printf("The new value of num: %d\n\n", num);

    int values[] = {10, 20, 30, 40, 50};
    int *p_values = values;
    printf("List of arrays: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p_values + i));
    }

    int myVar = 15;
    printf("\n\nThe value of myVar: %d\n", myVar);
    multiplyByTwo(&myVar);
    printf("The value of myVar after mumtiply by two: %d\n", myVar);

    return 0;
}
