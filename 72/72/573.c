#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//char* my_strcmp(char* src, char* det) {
//	if (!*src && !*det) return src;
//	if (!*src) return NULL;
//
//	while (*src) {
//		char* tmps = src, *tmpd = det;
//		int flag = 1;
//		while (*tmpd) {
//			if (*tmpd != *tmps) {
//				flag = 0;
//				break;
//			}
//			tmpd++;
//			tmps++;
//		}
//		if (flag) {
//			return src;
//		}
//		src++;
//	}
//
//	return NULL;
//
//}
//
//int main() {
//	char src[50], det[50];
//	fgets(src, 50, stdin);
//	fgets(det, 50, stdin);
//	int lens = strlen(src), lend = strlen(det);
//	lens--, lend--;
//	src[lens] = '\0', det[lend] = '\0';
//	char* pos = my_strcmp(src, det);
//	if (!pos) printf("No!\n");
//	else printf("%d\n", pos - src + 1);
//	return 0;
//}

int cal(int a, int b) {
	int tmp = a > b ? a : b;
	while (1) {
		if (tmp % a == 0 && tmp % b == 0) return tmp;
		tmp++;
	}
}

int main() {
	int n, arr[200], sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d" , &arr[i]);
	}

	sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += cal(arr[i], arr[i + 1]);
	}
	printf("%d\n", sum);
	return 0;
}