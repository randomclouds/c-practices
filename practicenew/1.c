#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    char** squre = (char**)malloc(sizeof(int*) * n);
    if (!squre) {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < n; i++) {
        squre[i] = (char*)malloc(sizeof(int) * n);
        if (!squre[i]) {
            printf("Error\n");
            exit(EXIT_FAILURE);
        }
    }
    
    

    return 0;
}