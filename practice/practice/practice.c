#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
//int cal(int n) {
//	double ret = 0;
//	int i = 1;
//	int count = 0;
//
//	while (ret <= n) {
//		ret += 1.0 / i++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//
//	int ret = cal(input);
//	printf("%d", ret);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 0 };
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	//涛涛高度
//	int height = 0;
//	int count = 0;
//	scanf("%d", &height);
//	height += 30;
//	for (i = 0; i < 10; i++) {
//		if (height >= arr[i]) {
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////字母个数
//int con(char* ps) {
//	int i = 0;
//	int count = 0;
//	while (ps[i++]) {
//		count++;
//	}
//	return count;
//}






////初始化
//void Initboard(char arr[5][100], int n, char s) {
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		int j = 0;
//		for (j = 0; j < n * 4 + 1; j++) {
//			arr[i][j] = s;
//		}
//	}
//	//赋值'*'和'#'
//	for (i = 0; i < 5; i++) {
//		int j = 0;
//		if (i == 0 || i == 4) {
//			for (j = 0; j < n; j++) {
//				arr[i][j * 4 + 2] = '#';
//				if ((j + 1) % 3 == 0) {
//					arr[i][j * 4 + 2] = '*';
//				}
//			}
//		}
//		else {
//			for (j = i % 2; j < n * 4 + 1; j += 2) {
//				arr[i][j] = '#';
//				/*if (j != 0 && (j % 12 >= 8|| j % 12 == 0)){
//					arr[i][j] = '*';
//				}*/
//			}
//		}
//	}
//}
//
//void show(char arr[5][100], char arr2[16], int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		arr[2][i * 4 + 2] = arr2[i];
//		if ((i + 1) % 3 == 0 ) {
//			arr[2][i * 4] = arr[2][i * 4 + 4] = '*';
//			arr[1][i * 4 + 1] = arr[1][i * 4 + 3] = '*';
//			arr[3][i * 4 + 1] = arr[3][i * 4 + 3] = '*';
//		}
//	}
//
//	//列数
//	int cols = n * 4 + 1;
//	for (i = 0; i < 5; i++) {
//		int j = 0;
//		for (j = 0; j < cols; j++) {
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	char arr[5][100] = { 0 };
//	char str[16] = { 0 };
//	scanf("%s", str);
//
//	//字母个数
//	int count = strlen(str);
//
//	//二维数组初始化
//	Initboard(arr, count, '.');
//
//	//打印'#'和'*'
//	show(arr, str, count);
//	return 0;
//}

//#include<math.h>
//int main() {
//	double r = 0;
//	scanf("%lf", &r);
//	double s1, s2;
//	s1 = 3.141592653 * r * r;
//	s2 = r * 2.0 * r;
//	printf("%.6f\n%.6f\n", s1, s2);
//	return 0;
//}

//#include <string.h>
//
//int main() {
//	int digits = 0;
//	char arr[1001] = { 0 };
//	
//	scanf("%d", &digits);
//	scanf("%s", arr);
//	int len = strlen(arr);
//
//	for (int i = 0; i < len; i++) {
//		if (arr[i] == '0') {
//			continue;
//		}
//		printf("%c*%d^%d", arr[i], digits, len - 1 - i);
//		if (i != len - 1) {
//			printf("+");
//		}
//	}
//	return 0;
//}
