#include <stdio.h>

int main() {
  int accessLevel = 10;
  int isRestrictedHours = 1;

  printf("Input: Level %d, Restricted Hours: %d\n", accessLevel, isRestrictedHours);

  if (accessLevel == 10) {
    printf("Access Granted: Welcome, Admin!\n");
  } else if (accessLevel >= 5 && accessLevel <= 9) {
    if (!isRestrictedHours) {
      printf("Access Granted: Welcome, Researcher!\n");
    } else {
      printf("Access Denied: Restricted Hours Active for Your Level.\n");
    }
  } else if (accessLevel >= 1 && accessLevel <= 4) {
    if (!isRestrictedHours) {
      printf("Access Granted: Welcome, Intern!\n");
    } else {
      printf("Access Denied: Restricted Hours Active for Your Level.\n");
    }
  } else if (accessLevel == 0) {
    printf("Access Denied: Authorization Level Insufficient.\n");
  } else {
    printf("Access Denied: Invalid Access Level.\n");
  }

  return 0;
}