#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//New a Array
char** Malloc(int n);

//
void InitSpace(char(*)[], int, int, int);

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	char** space = Malloc(n);
	InitSpace(space, n, m, k);
	free(space);
	return 0;
}

char** Malloc(int n) {
	char** space = (char**)malloc(sizeof(char*) * n);
	if (!space) {
		printf("Error\n");
		return 1;
	}
	for (int i = 0; i < n; i++) {
		space[i] = (char*)malloc(sizeof(char) * n);
		if (!space[i]) {
			printf("Error\n");
			return 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			space[i][j] = '0';
		}
	}
	return space;
}
void InitSpace(char(*space)[], int n, int m, int k) {
	int X, Y;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &X, &Y);
		for (int )
	}
}