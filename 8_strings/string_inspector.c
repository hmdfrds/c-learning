#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 100

int main()
{
    char input[MAX_LINE_LENGTH];
    printf("Enter a string (up to 99 characters): ");
    if (fgets(input, MAX_LINE_LENGTH, stdin))
    {
        int len = strlen(input);
        if (len > 0 && input[len - 1] == '\n')
        {
            input[len - 1] = '\0';
        }
        len = strlen(input);

        printf("\nOriginal string: %s\n", input);
        printf("Length of string: %d\n", len);
        int uCount = 0;
        int lCount = 0;
        int dCount = 0;
        int wCount = 0;

        for (int i = 0; input[i] != '\0'; i++)
        {
            if (isupper(input[i]))
            {
                uCount++;
            }
            if (islower(input[i]))
            {
                lCount++;
            }
            if (isdigit(input[i]))
            {
                dCount++;
            }
            if (isspace(input[i]))
            {
                wCount++;
            }
        }
        printf("Uppercase: %d\n", uCount);
        printf("Lowercase: %d\n", lCount);
        printf("Digit: %d\n", dCount);
        printf("Whitespace: %d\n", wCount);

        int j = 0;
        char reverse[MAX_LINE_LENGTH];
        for (int i = len - 1; i >= 0; i--)
        {
            printf("%c", input[i]);
            reverse[j++] = input[i];
        }

        reverse[j] = '\0';
        for (int i = 0; reverse[i] != '\0'; i++)
        {
            printf("%c", reverse[i]);
        }
        printf("Reverse: %s\n", reverse);
        printf("Reverse Length: %zu\n", strlen(reverse));
    }

    return 0;
}
