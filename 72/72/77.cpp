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

//#include <iostream>
//using namespace std;
//
//int arr[100000] = { 0 };
//void FindMaxSeries(int arr[], int len)
//{
//    int ThisSum = 0;
//    int LastSum = 0;
//    int fst = 0;
//    int last = len - 1;
//    int temp = 0;
//    for (int i = 0; i < len; ++i)
//    {
//        ThisSum += arr[i];
//        if (arr[i] != 0) ++temp;
//        if (ThisSum > LastSum)
//        {
//            LastSum = ThisSum;
//            last = i;
//            fst = i - temp + 1;
//        }
//        else
//        {
//            if (ThisSum < 0)
//            {
//                ThisSum = 0;
//                temp = 0;
//            }
//        }
//    }
//    if (LastSum == 0)
//    {
//        for (int i = 0; i < len; ++i)
//        {
//            if (arr[i] == 0)
//            {
//                fst = i;
//                last = i;
//            }
//        }
//    }
//    cout << LastSum << " " << arr[fst] << " " << arr[last];
//}
//int main()
//{
//    int N = 0;
//    cin >> N;
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> arr[i];
//    }
//    FindMaxSeries(arr, N);
//    return 0;
//}
