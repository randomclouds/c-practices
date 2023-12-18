#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <iostream>
#include <string>
using namespace std;

//int main() {
//    char op = 0;
//    int o[2] = { 0 };
//    int j = 0;
//    std::string input;
//    std::getline(std::cin, input);
//
//    for (char a : input) {
//        if (a != ' ') {
//            if (a < '0') {
//                j--;
//                op = a;
//            }
//            else o[j] = o[j] * 10 + a - '0';
//        }
//        else j++;
//    }
//
//    switch (op) {
//    case '+':
//        std::cout << o[0] + o[1] << std::endl;
//        break;
//    case '-':
//        std::cout << o[0] - o[1] << std::endl;
//        break;
//    case '*':
//        std::cout << o[0] * o[1] << std::endl;
//        break;
//    case '/':
//        std::cout << o[0] / o[1] << std::endl;
//        break;
//    case '%':
//        std::cout << o[0] % o[1] << std::endl;
//        break;
//    }
//    return 0;
//}

//int main() {
//	int row, col;
//	scanf("%d %d", &row, &col);
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	for (int i = 0; i < row; i++) {
//		*(arr + i) = (int*)malloc(sizeof(int) * col);
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		int flag = 1;
//		for (int j = 0; j < col; j++) {
//			if (flag) {
//				printf("%d", arr[i][j]);
//				flag = 0;
//			}
//
//			else printf("-%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < row; i++) {
//		free(*(arr + i));
//		*(arr + i) = NULL;
//	}
//	free(arr);
//	arr = NULL;
//
//	return 0;
//}

