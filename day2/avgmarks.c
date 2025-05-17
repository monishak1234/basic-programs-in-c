#include <stdio.h>

int main() {
  int marks;

  printf("Enter the marks obtained: ");
  scanf("%d", &marks);

  if (marks >= 80 && marks <= 100) {
    printf("Grade: A\n");
  } else if (marks >= 70 && marks < 80) {
    printf("Grade: B\n");
  } else if (marks >= 60 && marks < 70) {
    printf("Grade: C\n");
  
  } else {
    printf("Invalid marks entered.\n");
  }

  return 0;
}