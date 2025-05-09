#include <stdio.h>

int main()
{
    int potionID = 101;
    float volumeML = 50.75f;
    char effectCode = 'H';
    int ingredientCount = 5;

    printf("Potion Details:\n");
    printf("ID: %d\n", potionID);
    printf("Volume: %f\n", volumeML);
    printf("Effect Code: %c\n", effectCode);
    printf("Ingredient Count: %d\n", ingredientCount);
    return 0;
}