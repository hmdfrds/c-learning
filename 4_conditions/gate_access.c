#include <stdio.h>

int main()
{
    int accessLevel = 7;
    int isRestrictedHours = 0;

    if (accessLevel > 0 && accessLevel < 10)
    {
        if (accessLevel == 10)
        {
            printf("Access Granted: Welcome, Admin!\n");
        }
        else if (accessLevel > 4 && accessLevel < 10 && !isRestrictedHours)
        {
            printf("Access Granted: Welcome, Researcher!\n");
        }
        else if (accessLevel < 5 && !isRestrictedHours)
        {
            printf("Access Granted: Welcome, Intern!\n");
        }
        else
        {
            printf("Access DEnied: Restricted Hours Active for Your Level.\n");
        }
    }
    else
    {
        printf("Access DEnied: Invalid Access Level.\n");
    }

    return 0;
}