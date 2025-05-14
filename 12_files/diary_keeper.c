#include <stdio.h>
#include <string.h>
#include <time.h>
#define diaryFilename "diary.txt"

int main()
{
    char input[100];
    printf("Input you diary Entry:\n");

    if (fgets(input, sizeof(input), stdin) != NULL)
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
    char timestamp_str[100];
    strftime(timestamp_str, sizeof(timestamp_str), "%Y-%m-%d %H:%M:%S",
             local_time_info);

    FILE *openFile = fopen(diaryFilename, "a");

    if (openFile == NULL)
    {
        printf("Error opening file %s for appending\n", diaryFilename);
        return 1;
    }

    if (!fputs(timestamp_str, openFile))
    {
        printf("Error writing into file %s\n", diaryFilename);
        return 1;
    }

    if (!fprintf(openFile, ": %s\n", input))
    {
        printf("Error writing into file %s\n", diaryFilename);
        return 1;
    }

    fclose(openFile);
    printf("Entry was added into %s\n", diaryFilename);

    printf("\n--- Displaying Diary Entries ---\n");

    FILE *readFile = fopen(diaryFilename, "r");

    if (readFile == NULL)
    {
        printf("Error reading file %s\n", diaryFilename);
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), readFile))
    {
        printf("%s", line);
    }

    fclose(readFile);

    return 0;
}
