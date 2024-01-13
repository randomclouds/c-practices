#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(char** pt, int n) {
    for (int i = 2; i < n + 2; i++) {
        for (int j = 2; j < n + 2; j++) {
            printf("%c", pt[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    char** squre = (char**)malloc(sizeof(char*) * (n + 4));
    if (!squre) {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < n + 4; i++) {
        squre[i] = (char*)malloc(sizeof(char) * (n + 4));
        if (!squre[i]) {
            printf("Error\n");
            exit(EXIT_FAILURE);
        }
    }
    
    for (int i = 0; i < n + 4; i++) {
        memset(squre[i], '0', n + 4);

    }

    int x, y;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        x++, y++;
        for (int row = -1; row <= 1; row++) {
            for (int col = -1; col <= 1; col++) {
                squre[x + row][y + col] = '1';
            }
        }
        squre[x - 2][y] = '1';
        squre[x + 2][y] = '1';
        squre[x][y - 2] = '1';
        squre[x][y + 2] = '1';
        //show(squre, n);
    }

    for (int i = 0; i < k; i++) {
        scanf("%d %d", &x, &y);
        x++, y++;
        for (int row = -2; row <= 2; row++) {
            for (int col = -2; col <= 2; col++) {
                squre[x + row][y + col] = '1';
            }
        }
    }

    //cal
    int count = 0;
    for (int i = 2; i < n + 2; i++) {
        for (int j  = 2; j < n + 2; j++) {
            if (squre[i][j] == '0') count++;
        }
    }

    printf("%d", count);


    return 0;
}