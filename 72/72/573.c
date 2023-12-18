#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

char* MyCopy(char* src) {
	char* det = (char*)malloc(sizeof(char) * 300);
	if (!det) {
		printf("Error\n");
		return NULL;
	}
	int i = 0, j = 0, flag = 0;
	while (src[i]) {
		if (flag) {
			det[j++] = ' ';
		}
		det[j++] = src[i++];
		flag = 1;
	}
	det[j] = '\0';

	return det;
}

int main() {
	char str[101] = { 0 };
	scanf("%s", str);

	char* det = MyCopy(str);
	printf("%s", det);
	free(det);
	return 0;
}