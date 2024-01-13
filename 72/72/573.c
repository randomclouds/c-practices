#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void* Init(int row, int col) {
	int** p = (int**)malloc(sizeof(int*) * (row + 1));
	if (!p) {
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < row + 1; i++) {
		p[i] = (int*)calloc(col + 1, sizeof(int));
		if (!p) {
			exit(EXIT_FAILURE);
		}
	}
	return p;
}

typedef struct {
	int x;
	int y;
}Position;

int main() {
	int row, col, r, y;
	scanf("%d %d %d %d", &row, &col, &r, &y);
	int** p1 = (int**)Init(row, col), ** p2 = (int**)Init(row, col);
	Position imp[100] = { 0 };

	for (int i = 1; i <= r; i++) {
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		x1, y1, x2, y2;
		for (int row = x1; row <= x2; row++) {
			for (int col = y1; col <= y2; col++) {
				p1[row][col]++;
				p2[row][col] = i;
			}
		}
	}
	for (int i = 0; i < y; i++) {
		scanf("%d %d", &imp[i].x, &imp[i].y);
	}

	for (int i = 0; i < y; i++) {
		int flag = 0;
		if (p1[imp[i].x][imp[i].y] != 0) flag = 1;
		if (flag) {
			printf("Y %d %d\n", p1[imp[i].x][imp[i].y], p2[imp[i].x][imp[i].y]);
		}
		else printf("N\n");

	}
	return 0;
}
