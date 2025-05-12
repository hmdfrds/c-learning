#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNumberOfScores;

    printf("Number of score to record: ");

    if (!scanf("%d", &inputNumberOfScores))
    {
        printf("Error reading input\n");
        return 1;
    }

    int *scores = (int *)malloc(inputNumberOfScores * sizeof(int));

    if (scores == NULL)
    {
        printf("Error while allocating memory\n");
        return 1;
    }

    printf("Memory allocated successfully.\n");
    for (int i = 0; i < inputNumberOfScores; i++)
    {
        printf("Enter score %d: ", i + 1);
        if (!scanf("%d", (scores + i)))
        {
            printf("\nError while reading score");
            free(scores);
            return 1;
        }
    }
    printf("\n--- Your Scores ---\n");
    int sum = 0;
    for (int i = 0; i < inputNumberOfScores; i++)
    {
        int score = *(scores + i);
        sum += score;
        printf("Score %d: %d\n", i + 1, score);
    }
    printf("Sum of scores: %d\n", sum);

    printf("Freeing allocated memory.\n");
    free(scores);
    scores = NULL;

    return 0;
}
