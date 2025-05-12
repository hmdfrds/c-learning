#include <stdio.h>
#include <string.h>
#include <time.h>
#define DIARY_FILE "diary.txt"
#define MAX_LINE_LENGTH 100

int main()
{
    char input[MAX_LINE_LENGTH];
    printf("Input you diary Entry:\n");

    if (fgets(input, MAX_LINE_LENGTH, stdin) != NULL)
    {
        int len = strlen(input);

        if (len > 0 && input[len - 1] == '\n')
        {
            input[len - 1] = '\0';
        }
    }
    else
    {
        printf("Error while reading input\n");
        return 1;
    }

    time_t now = time(NULL);
    struct tm *local_time_info = localtime(&now);
    char timestamp_str[MAX_LINE_LENGTH];
    strftime(timestamp_str, sizeof(timestamp_str), "%Y-%m-%d %H:%M:%S",
             local_time_info);

    FILE *openFile = fopen(DIARY_FILE, "a");

    printf("Opening file\n");
    if (openFile == NULL)
    {
        printf("Error opening file %s for appending\n", DIARY_FILE);
        return 1;
    }

    if (!fputs(timestamp_str, openFile))
    {
        printf("Error writing into file %s\n", DIARY_FILE);
        return 1;
    }

    if (!fprintf(openFile, ": %s\n", input))
    {
        printf("Error writing into file %s\n", DIARY_FILE);
        return 1;
    }

    fclose(openFile);
    printf("Entry was added into %s\n", DIARY_FILE);

    printf("\n--- Displaying Diary Entries ---\n");

    FILE *readFile = fopen(DIARY_FILE, "r");

    if (readFile == NULL)
    {
        printf("Error reading file %s\n", DIARY_FILE);
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), readFile))
    {
        printf("%s", line);
    }

    fclose(readFile);

    return 0;
}
