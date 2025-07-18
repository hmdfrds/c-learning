#include <stdio.h>

typedef enum { INT_TYPE, FLOAT_TYPE, CHAR_TYPE, STRING_TYPE } Type;

typedef struct {
  Type type;
  union {
    int i;
    float f;
    char c;
    char str[20];
  } data;
} Variant;

int main() {
  Variant v;
  int input_type;

  printf("Enter type (1=int, 2=float, 3=char, 4=string): ");
  scanf("%d", &input_type);

  switch (input_type) {
  case 1:
    v.type = INT_TYPE;
    printf("Enter int: ");
    scanf("%d", &v.data.i);
    break;
  case 2:
    v.type = FLOAT_TYPE;
    printf("Enter float: ");
    scanf("%f", &v.data.f);
    break;
  case 3:
    v.type = CHAR_TYPE;
    printf("Enter char: ");
    scanf(" %c", &v.data.c);
    break;
  case 4:
    v.type = STRING_TYPE;
    printf("Enter string: ");
    scanf("%19s", v.data.str);
    break;
  default:
    printf("Invalid type\n");
    return 1;
  }

  switch (v.type) {
  case INT_TYPE:
    printf("Safe int: %d\n", v.data.i);
    break;
  case FLOAT_TYPE:
    printf("Safe float: %.2f\n", v.data.f);
    break;
  case CHAR_TYPE:
    printf("Safe char: %c\n", v.data.c);
    break;
  case STRING_TYPE:
    printf("Safe string: %s\n", v.data.str);
    break;
  }

  return 0;
}
