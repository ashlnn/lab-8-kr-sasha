#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int X[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int Y[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int Z[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            Z[i][j] = X[i][j] + 3 * Y[i][j];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%d ", Z[i][j]);
        printf("\n");
    }

    return 0;
}
