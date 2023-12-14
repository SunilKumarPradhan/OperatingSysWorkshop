#include <stdio.h>

#define MAX_QUESTIONS 50
#define MAX_STUDENTS 100

// Function prototypes
void fgetAnswers(FILE *file, int *numQuestions, char *answerKey);
void gradeExam(FILE *file, int numQuestions, char *answerKey);
void generateReport(FILE *file, int numQuestions, char *answerKey, int *missedQuestions);

int main() {
    FILE *examFile = fopen("examdat.txt", "r");
    FILE *reportFile = fopen("report.txt", "w");

    if (examFile == NULL || reportFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int numQuestions;
    char answerKey[MAX_QUESTIONS];
    int missedQuestions[MAX_QUESTIONS] = {0};

    // Read answer key from the file
    fgetAnswers(examFile, &numQuestions, answerKey);

    // Grade the exam and generate the report
    gradeExam(examFile, numQuestions, answerKey, missedQuestions);
    generateReport(reportFile, numQuestions, answerKey, missedQuestions);

    // Close files
    fclose(examFile);
    fclose(reportFile);

    return 0;
}

void fgetAnswers(FILE *file, int *numQuestions, char *answerKey) {
    fscanf(file, "%d %s", numQuestions, answerKey);
}

void gradeExam(FILE *file, int numQuestions, char *answerKey, int *missedQuestions) {
    int studentID, score;
    char studentAnswers[MAX_QUESTIONS];

    // Print header for report
    printf("Exam Report\n");
    printf("Question ");
    for (int i = 0; i < numQuestions; i++) {
        printf("%d ", i + 1);
    }
    printf("\nAnswer ");
    for (int i = 0; i < numQuestions; i++) {
        printf("%c ", answerKey[i]);
    }
    printf("\n");

    // Process each student's answers
    while (fscanf(file, "%d %s", &studentID, studentAnswers) == 2) {
        score = 0;

        // Compare student's answers with the answer key
        for (int i = 0; i < numQuestions; i++) {
            if (studentAnswers[i] == answerKey[i]) {
                score++;
            } else {
                missedQuestions[i]++;
            }
        }

        // Calculate and print the score percentage for each student
        double percentage = (double)score / numQuestions * 100;
        printf("%d %.0f\n", studentID, percentage);
    }
}

void generateReport(FILE *file, int numQuestions, char *answerKey, int *missedQuestions) {
    fprintf(file, "Exam Report\n");

    // Print answer key
    fprintf(file, "Question ");
    for (int i = 0; i < numQuestions; i++) {
        fprintf(file, "%d ", i + 1);
    }
    fprintf(file, "\nAnswer ");
    for (int i = 0; i < numQuestions; i++) {
        fprintf(file, "%c ", answerKey[i]);
    }
    fprintf(file, "\n\n");

    // Print student scores and missed questions
    fprintf(file, "ID Score(%%)\n");

    // Iterate over students and print their scores
    // Assume you have an array of student IDs and their corresponding scores
    int studentIDs[MAX_STUDENTS] = {111, 102, 251}; // Example student IDs
    double studentScores[MAX_STUDENTS] = {80, 60, 100}; // Example student scores

    for (int i = 0; i < MAX_STUDENTS && studentIDs[i] != 0; i++) {
        fprintf(file, "%d %.0f\n", studentIDs[i], studentScores[i]);
    }

    fprintf(file, "\nQuestion ");
    for (int i = 0; i < numQuestions; i++) {
        fprintf(file, "%d ", i + 1);
    }
    fprintf(file, "\nMissed by ");
    for (int i = 0; i < numQuestions; i++) {
        fprintf(file, "%d ", missedQuestions[i]);
    }
}
