#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);//store the Arrey;
    if (!arr) {
        printf("Error\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int pos1 = 0, pos2 = N - 1;//this is for the maxinum subsequence sum indices
    int tpos1 = 0, tpos2 = 0, FirstMaxSum = -1, MaxSum = -1,Sum = 0, flag = 1;
    for (int i = 0; i < N; i++) {
        Sum += arr[i];
        if (Sum < 0) {
            Sum = 0;
            flag = 1;
            continue;
        }

        if (Sum > MaxSum) {
            if (flag) {
                tpos1 = i;
            }
            MaxSum = Sum;
            flag = 0;
            tpos2 = i;
        }
        else if (Sum == MaxSum && !flag) {
            tpos2 = i;
        }

        if (MaxSum > FirstMaxSum) {
            pos1 = tpos1;
            pos2 = tpos2;
            FirstMaxSum = MaxSum;
        }
    }
    printf("%d %d %d\n", FirstMaxSum, arr[pos1], arr[pos2]);
    free(arr);
    return 0;
}
