#include <stdio.h>

int main() {
    int marks1, marks2, marks3;
    int total;
    float average;

    // Input marks for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3)
    total = marks1 + marks2 + marks3;
    average = (float)total / 3;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}