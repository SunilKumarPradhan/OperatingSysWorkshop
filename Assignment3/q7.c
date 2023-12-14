#include <stdio.h>

int main() {
    // Open the file for reading
    FILE *file = fopen("batting_records.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }

    // Variables to store player number, batting record, and counters
    int playerNumber, hits = 0, atBats = 0;
    char record;

    // Process data from the file
    while (fscanf(file, "%d", &playerNumber) == 1) {
        printf("Player %d Batting Record: ", playerNumber);

        // Process batting record for each player
        while ((record = fgetc(file)) != '\n' && record != EOF) {
            printf("%c", record);

            // Update counters based on the batting record
            if (record == 'H' || record == 'P') {
                hits++;
                atBats++;
            } else if (record == 'O' || record == 'S') {
                atBats++;
            }
        }

        // Calculate and display batting average
        float battingAverage = (float)hits / atBats;
        printf("\nBatting Average: %.3f\n\n", battingAverage);

        // Reset counters for the next player
        hits = 0;
        atBats = 0;
    }

    // Close the file
    fclose(file);

    return 0;
}
