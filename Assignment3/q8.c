#include <stdio.h>

char getGrade(int score) {
    if (score >= 80) {
        return 'A';
    } else if (score >= 65) {
        return 'B';
    } else if (score >= 40) {
        return 'C';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; ++i) {
        int m1, m2, m3, m4;
        printf("Enter marks for student %d (m1 m2 m3 m4): ", i + 1);
        scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
 
       
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100 || m4 < 0 || m4 > 100) {
            printf("Invalid scores. Scores must be between 0 and 100.\n");
            return 1; 
        }

      
        double average = (m1 + m2 + m3 + m4) / 4.0;
        char grade = getGrade((int)average);

        printf("Student %d: Average = %.2f, Grade = %c\n", i + 1, average, grade);
    }

    return 0;
}
