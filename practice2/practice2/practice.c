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
//		printf("开辟失败\n");
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



//int main() {
//    int begin, arrival;
//    scanf("%d %d", &begin, &arrival);
//    int h = arrival / 100 + begin / 100;
//    int m = arrival % 100 - begin % 100;
//    int total = h * 60 + m;
//    h = total / 60;
//    m = total % 60;
//    if (h < 10) {
//        if (m < 10) printf("0%d:0%d", h, m);
//        else printf("0%d:%d", h, m);
//    }
//    else {
//        if (m < 10) printf("%d:0%d", h, m);
//        else printf("%d:%d", h, m);
//    }
//    return 0;
//}


//int main() {
//    int speed, limit;
//    scanf("%d %d", &speed, &limit);
//    int d = (double)speed / limit * 100 + 0.5;
//    if (d < 110)printf("OK\n");
//    else if (d < 150) printf("Exceed %d%%. Ticket 200\n", d - 100);
//    else printf("Exceed %d%%, License Revoked", d - 100);
//    return 0;
//}

//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    switch (a / 10){
//    case 10:
//    case 9:
//        printf("A\n");
//        break;
//    case 8:
//        printf("B\n");
//        break;
//    case 7:
//        printf("C\n");
//        break;
//    case 6:
//        printf("D\n");
//        break;
//    default:
//        printf("E\n");
//    }
//    return 0;
//}
//
//int main() {
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//
//    int n, m, k;
//    scanf("%d %d %d", &n, &m, &k);
//    int bGain = m + n + k;
//    if (a < b) {
//        if (bGain) printf("The winner is b: %d + %d", b, bGain);
//        else printf("The winner is a: %d + 3", a);
//    }
//    if (a > b) {
//        if (bGain == 3) printf("The winner is b: %d + 3", b);
//        else printf("The winner is a: %d + %d", a, 3 - bGain);
//    }
//    return 0;
//}

//后续遍历

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        return 1;
    }
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }

    struct TreeNode** stack = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1000);
    int top = -1;
    struct TreeNode* curr = root;
    struct TreeNode* prev = NULL;
    int* result = (int*)malloc(sizeof(int) * 1000);
    int index = 0;

    while (top != -1 || curr != NULL) {
        if (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        else {
            struct TreeNode* node = stack[top];
            if (node->right == NULL || node->right == prev) {
                result[index++] = node->val;
                prev = node;
                top--;
            }
            else {
                curr = node->right;
            }
        }
    }

    *returnSize = index;
    return result;
}

int main() {
    struct TreeNode* root = createNode(1);
    root->right = createNode(2);
    root->right->left = createNode(3);

    int returnSize;
    int* result = postorderTraversal(root, &returnSize);

    printf("Postorder Traversal: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);

    return 0;
}
