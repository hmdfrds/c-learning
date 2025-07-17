#include <stdio.h>

int main() {
  int age;
  double pi;
  char initial;

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter pi (approx): ");
  scanf("%lf", &pi);

  printf("Enter your initial: ");
  scanf(" %c", &initial);

  printf("Age: %d\n", age);
  printf("PI: %.2f\n", pi);
  printf("Initial: %c\n", initial);

  if (age >= 18) {
    printf("You're an adult!\n");
  } else {
    printf("Still a kid.\n");
  }

  int count = 0;
  while (count < 3) {
    printf("Loop #%d\n", ++count);
  }

  return 0;
}
