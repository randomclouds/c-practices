#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define NUM 6
#define T 1.11

//void* Init(int row, int col) {
//	int** p = (int**)malloc(sizeof(int*) * (row + 1));
//	if (!p) {
//		exit(EXIT_FAILURE);
//	}
//	for (int i = 0; i < row + 1; i++) {
//		p[i] = (int*)calloc(col + 1, sizeof(int));
//		if (!p) {
//			exit(EXIT_FAILURE);
//		}
//	}
//	return p;
//}
//
//typedef struct {
//	int x;
//	int y;
//}Position;
//
//int main() {
//	int row, col, r, y;
//	scanf("%d %d %d %d", &row, &col, &r, &y);
//	int** p1 = (int**)Init(row, col), ** p2 = (int**)Init(row, col);
//	Position imp[100] = { 0 };
//
//	for (int i = 1; i <= r; i++) {
//		int x1, y1, x2, y2;
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		x1, y1, x2, y2;
//		for (int row = x1; row <= x2; row++) {
//			for (int col = y1; col <= y2; col++) {
//				p1[row][col]++;
//				p2[row][col] = i;
//			}
//		}
//	}
//	for (int i = 0; i < y; i++) {
//		scanf("%d %d", &imp[i].x, &imp[i].y);
//	}
//
//	for (int i = 0; i < y; i++) {
//		int flag = 0;
//		if (p1[imp[i].x][imp[i].y] != 0) flag = 1;
//		if (flag) {
//			printf("Y %d %d\n", p1[imp[i].x][imp[i].y], p2[imp[i].x][imp[i].y]);
//		}
//		else printf("N\n");
//
//	}
//	return 0;
//}

//int main() {
//	double x, ave = 0.01603, sum = 0;
//	for (int i = 0; i < 8; i++) {
//		scanf("%lf", &x);
//		sum += pow(x - ave, 2);
//	}0.01569 0.01605 0.01622 0.01545 0.01570 0.01564 0.01573 0.01691
//	sum /= 56;
//	sum = sqrt(sum);
//	sum *= 1.08;
//	printf("dA = %lf\n", sum);
//	printf("%lf", 1 / sqrt(3.0) * 0.00005);
//	double b = pow(1 / sqrt(3.0) * 0.00005, 2);
//	printf("db = %lf\n", b);
//	printf("d = %lf\n", sqrt(pow(sum, 2) + pow(b, 2)));
//	return 0;
//}

//int main() {
//	double a[8], ave = 0, sum = 0;
//	for (int i = 0; i < 8; i++) {
//		scanf("%lf", &a[i]);
//		ave += a[i];
//	}
//	ave /= 8;
//	for (int i = 0; i < 8; i++) {
//		sum += pow(a[i] - ave, 2.0);
//	}
//	double s = sqrt(sum / 7), tmps = s;
//
//	s /= sqrt(8);
//	double f = sqrt(pow(s, 2) + pow(0.05 / sqrt(3), 2));
//	printf("%lf %lf %lf %lf %lf", ave, tmps, s, f, f/ave);
//	return 0;
//}

int main() {
	double a[NUM], ave, sum1 = 0, sum2 = 0;
	for (int i = 0; i < NUM; i++) {
		scanf("%lf", &a[i]);
		sum1 += a[i];
	}
	ave = sum1 / NUM;

	double S, sigema, AveSigema, DeltaB, Del;
	for (int i = 0; i < NUM; i++) {
		sum2 += pow(a[i] - ave, 2.0);
	}
	S = sqrt(sum2 / ((double)(NUM - 1)));
	sigema = S * T;
	AveSigema = sigema / sqrt(NUM);
	DeltaB = 0.005 / sqrt(3.0);
	Del = sqrt(pow(AveSigema, 2.0) + pow(DeltaB, 2.0));
	printf("ave=%lf S=%lf sigema=%lf AveSigema=%lf DeltaB=%lf Del=%lf", ave, S, sigema, AveSigema, DeltaB, Del);
	return 0;
}

