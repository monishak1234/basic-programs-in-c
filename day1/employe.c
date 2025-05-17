#include <stdio.h>

int main() {
  int age;
  float salary;

  printf("Enter the age of the employee: ");
  scanf("%d", &age);

  printf("Enter the salary of the employee: ");
  scanf("%f", &salary);

  printf("\nEmployee Details:\n");
  printf("Age: %d\n", age);
  printf("Salary: %.2f\n", salary);

  return 0;
}