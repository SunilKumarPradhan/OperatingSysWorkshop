#include <stdio.h>

int main() {
    // Declare variables
    float gpa;

    // Prompt user for GPA
    printf("Enter your Grade Point Average: ");
    scanf("%f", &gpa);

    // Check GPA range and display transcript message accordingly
    if (gpa >= 0.0 && gpa <= 0.99) {
        printf("Failed semester. Registration suspended.\n");
    } else if (gpa >= 1.0 && gpa <= 1.99) {
        printf("On probation for next semester.\n");
    } else if (gpa >= 2.0 && gpa <= 2.99) {
        // No message for this GPA range
    } else if (gpa >= 3.0 && gpa <= 3.49) {
        printf("Dean's list for the semester.\n");
    } else if (gpa >= 3.5 && gpa <= 4.0) {
        printf("Highest honors for the semester.\n");
    } else {
        // Invalid GPA
        printf("Invalid GPA. Please enter a GPA between 0.0 and 4.0.\n");
    }

    return 0;
}
