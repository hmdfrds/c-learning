#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[3] = {10, 20, 30};
  int *p = arr;

  printf("First: %d\n", *p);
  p++;
  printf("Second: %d\n", *p);
  p++;
  printf("Third: %d\n", *p);

  int size;
  printf("Enter size: ");
  scanf("%d", &size);

  char *dyn = (char *)malloc(size * sizeof(char));
  if (dyn == NULL) {
    printf("Alloc fail\n");
    return 1;
  }

  for (int i = 0; i < size; i++) {
    printf("Enter char: ");
    scanf(" %c", dyn++);
  }
  int counter = size;
  while (counter > 0) {
    printf("%c", *--dyn);
    counter--;
  }
  printf("\n");
  free(dyn);

  return 0;
}
