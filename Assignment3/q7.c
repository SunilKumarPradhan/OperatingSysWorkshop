#include <stdio.h>

int main() {
 
    FILE *file = fopen("batting_records.txt", "r");

  
    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

  
    int playerNumber, hits = 0, atBats = 0;
    char record;

   
    while (fscanf(file, "%d", &playerNumber) == 1) {
        printf("Player %d Batting Record: ", playerNumber);

      
        while ((record = fgetc(file)) != '\n' && record != EOF) {
            printf("%c", record);

            
            if (record == 'H' || record == 'P') {
                hits++;
                atBats++;
            } else if (record == 'O' || record == 'S') {
                atBats++;
            }
        }

   
        float battingAverage = (float)hits / atBats;
        printf("\nBatting Average: %.3f\n\n", battingAverage);

       
        hits = 0;
        atBats = 0;
    }

    fclose(file);

    return 0;
}
