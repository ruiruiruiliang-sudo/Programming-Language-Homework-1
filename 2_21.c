#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS  9
#define WIDTH 9
#define GAP   "   "

void buildSquare(char grid[ROWS][WIDTH]) {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < WIDTH; c++)
            grid[r][c] = (r == 0 || r == ROWS - 1 || c == 0 || c == WIDTH - 1)
                         ? '*' : ' ';
}

void buildOval(char grid[ROWS][WIDTH]) {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < WIDTH; c++)
            grid[r][c] = ' ';

    int cx = WIDTH / 2, cy = ROWS / 2;
    double a = 3.0, b = 4.0;

    for (int r = 0; r < ROWS; r++) {
        double dy = r - cy;
        double inside = 1.0 - (dy * dy) / (b * b);
        if (inside < 0) continue;
        int dx = (int)(a * sqrt(inside) + 0.5);
        grid[r][cx - dx] = '*';
        grid[r][cx + dx] = '*';
    }
}

void buildArrow(char grid[ROWS][WIDTH]) {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < WIDTH; c++)
            grid[r][c] = ' ';

    int cx = WIDTH / 2;

    for (int r = 0; r < 4; r++)
        for (int c = cx - r; c <= cx + r; c++)
            grid[r][c] = '*';

    /* 箭桿 */
    for (int r = 4; r < ROWS; r++)
        grid[r][cx] = '*';
}

void buildDiamond(char grid[ROWS][WIDTH]) {
    int cx = WIDTH / 2, cy = ROWS / 2;
    int radius = cx;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < WIDTH; c++) {
            int dist = abs(c - cx) + abs(r - cy);
            grid[r][c] = (dist == radius) ? '*' : ' ';
        }
    }
}

int main(void) {
    char square[ROWS][WIDTH], oval[ROWS][WIDTH];
    char arrow[ROWS][WIDTH], diamond[ROWS][WIDTH];

    buildSquare(square);
    buildOval(oval);
    buildArrow(arrow);
    buildDiamond(diamond);

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < WIDTH; c++) printf("%c", square[r][c]);
        printf(GAP);
        for (int c = 0; c < WIDTH; c++) printf("%c", oval[r][c]);
        printf(GAP);
        for (int c = 0; c < WIDTH; c++) printf("%c", arrow[r][c]);
        printf(GAP);
        for (int c = 0; c < WIDTH; c++) printf("%c", diamond[r][c]);
        printf("\n");
    }
    
    system("Pause");
    return 0;
}
