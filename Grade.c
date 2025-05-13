#include <stdio.h>

int main() {
    int marks;

    // Ask user for marks
    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    // Grade calculation
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B+\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else if (marks >= 40) {
        printf("Grade: D\n");
    } else if (marks >= 0) {
        printf("Grade: F (Fail)\n");
    } else {
        printf("Invalid marks entered.\n");
    }
}
