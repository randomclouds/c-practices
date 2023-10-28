#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>

//typedef struct ski { 
//	int value;
//	int hur;
//}ski;
//
//int main() {
//	int k, m, n;
//	scanf("%d %d %d", &k, &m, &n);
//	ski* ski1 = (ski*)malloc(m * sizeof(ski));
//	if (ski1 == NULL) {
//		printf("¿ª±ÙÊ§°Ü\n");
//		return 1;
//	}
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &(ski1 + i)->value, &(ski1 + i)->hur);
//	}
//	int flag = 1;
//	for (int i = 0; i < m; i++) {
//		if ((ski1 + i)->hur != 0 && (ski1 + i)->value == 0) {
//			printf("%d ", i + 1);
//			flag = 0;
//			continue;
//		}
//		if (k / (ski1 + i)->value * (ski1 + i)->hur >= n) {
//			printf("%d ", i + 1);
//			flag = 0;
//		}
//	}
//	free(ski1);
//	ski1 = NULL;
//	if (flag == 1) {
//		printf("-1\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void convert_to_decimal(char* num, int base) {
//    int len = strlen(num);
//    int i;
//    int first = 1;
//    for (i = 0; i < len; i++) {
//        int digit = num[i] - '0';
//        if (digit != 0) {
//            if (!first) {
//                printf("+");
//            }
//            printf("%d*%d^%d", digit, base, len - i - 1);
//            first = 0;
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    int base;
//    char num[1001];
//    scanf("%d %s", &base, num);
//    convert_to_decimal(num, base);
//    return 0;
//}



//int calculateInversionCount(char* p, int n) {
//    int inversionCount = 0;
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (p[i] > p[j]) {
//                inversionCount++;
//            }
//        }
//    }
//    return inversionCount;
//}
//
//int calculateDictionaryRank(char* p, int n) {
//    int inversionCount = calculateInversionCount(p, n);
//    return inversionCount + 1;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    char* p = (char*)calloc(n, sizeof(char) + 1);
//    if (p == NULL) {
//        return 1;
//    }
//    scanf("%s", p);
//    int rank = calculateDictionaryRank(p, n);
//    printf("%d\n", rank);
//    free(p);
//    p = NULL;
//    return 0;
//}
