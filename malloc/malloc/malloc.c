#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdlib.h>
#include <stdio.h>
#include<assert.h>

int main() {
	int n = 0;
	printf("输入一个n个数:");
	scanf("%d", &n);

	int* p = (int*)malloc(n*sizeof(int));
	if (p == NULL) {
		printf("开辟失败");
		return 1;
	}
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", p + i);
	}
	for (i = 0; i < n; i++) {
		assert(p);
		printf("%d ", p[i]);
	}

	free(p);
	p = NULL;

	
	return 0;
}