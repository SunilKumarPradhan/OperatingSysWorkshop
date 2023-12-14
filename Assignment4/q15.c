#include <stdio.h>


int isValidPosition(int position);

int main() {
   
    int chessPosition;
    printf("Enter a two-digit position (11 to 88): ");
    scanf("%d", &chessPosition);


    if (isValidPosition(chessPosition)) {
        
        int row = chessPosition / 10;
        int column = chessPosition % 10;

        
        if ((row + column) % 2 == 0) {
            printf("The square is black.\n");
        } else {
            printf("The square is white.\n");
        }
    } else {
        printf("Invalid position entered.\n");
    }

    return 0;
}


int isValidPosition(int position) {
    int row = position / 10;
    int column = position % 10;

    return (row >= 1 && row <= 8 && column >= 1 && column <= 8);
}
