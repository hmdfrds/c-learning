#include <stdio.h>
#include <stdlib.h>

struct Employee {
  char name[20];
  int age;
  double salary;
};

int main() {
  int size = 2;
  struct Employee *employees =
      (struct Employee *)malloc(2 * sizeof(struct Employee));
  if (employees == NULL) {
    printf("Alloc fail\n");
    return 1;
  }

  struct Employee *ptr = employees;
  for (int i = 0; i < size; i++) {
    printf("Name: ");
    scanf(" %19s", ptr->name);
    printf("Age: ");
    scanf(" %d", &ptr->age);
    printf("Salary: ");
    scanf("%lf", &ptr->salary);
    ptr++;
  }

  ptr = employees;
  for (int i = 0; i < size; i++) {
    printf("Employee(%s,%d,%2f)\n", ptr->name, ptr->age, ptr->salary);
    ptr++;
  }
  free(employees);
  return 0;
}
