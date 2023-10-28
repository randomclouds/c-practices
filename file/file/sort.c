#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void sort(int arr[10]) {
	for (int i = 0; i < 10; i++) {
		int flag = 1;
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

int main() {
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	sort(arr);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}