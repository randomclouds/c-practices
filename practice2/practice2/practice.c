#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<ctype.h>
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

//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//struct TreeNode* createNode(int val) {
//    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//    if (newNode == NULL) {
//        return 1;
//    }
//    newNode->val = val;
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    if (root == NULL) {
//        *returnSize = 0;
//        return NULL;
//    }
//
//    struct TreeNode** stack = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1000);
//    int top = -1;
//    struct TreeNode* curr = root;
//    struct TreeNode* prev = NULL;
//    int* result = (int*)malloc(sizeof(int) * 1000);
//    int index = 0;
//
//    while (top != -1 || curr != NULL) {
//        if (curr != NULL) {
//            stack[++top] = curr;
//            curr = curr->left;
//        }
//        else {
//            struct TreeNode* node = stack[top];
//            if (node->right == NULL || node->right == prev) {
//                result[index++] = node->val;
//                prev = node;
//                top--;
//            }
//            else {
//                curr = node->right;
//            }
//        }
//    }
//
//    *returnSize = index;
//    return result;
//}
//
//int main() {
//    struct TreeNode* root = createNode(1);
//    root->right = createNode(2);
//    root->right->left = createNode(3);
//
//    int returnSize;
//    int* result = postorderTraversal(root, &returnSize);
//
//    printf("Postorder Traversal: ");
//    for (int i = 0; i < returnSize; i++) {
//        printf("%d ", result[i]);
//    }
//    printf("\n");
//
//    free(result);
//
//    return 0;
//}


//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i <= N; i++) {
//		printf("%d\n", i);
//	}
//	return 0;
//}
//void print(int N) {
//	if (N) {
//		print(N - 1);
//		printf("%d\n", N);
//	}
//	return 0;
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	print(N);
//	return 0;
//}
//
//#include<time.h>
//#include<math.h>
//#define MAXU 1e5
//clock_t star, stop;
//
//double cal(double a[], int x, int max) {
//	double sum = 0;
//	for (int i = 0; i < max; i++) {
//		sum += a[i] * pow(x,i);
//	}
//	return sum;
//}
//
//double cal2(double a[], int x, int max) {
//	double sum = 0;
//	for (int i = 0; i < max; i++) {
//		sum = sum * x + a[max - i - 1] / i;
//	}
//	return 0;
//}
//
//void use(double(*fp)(double[], int, int), double a[], int x, int max) {
//	star = clock();
//	for (int i = 0; i < MAXU; i++)
//		fp(a, x, max);
//	stop = clock();
//	double durationl = ((double)(stop - star)) / CLK_TCK;
//	printf("Ticket = %f\n", (double)(stop - star));
//	printf("durationl = %6.2e\n", durationl);
//}
//
//int main() {
//	double arr[100] = { 0 }, x = 0;
//	arr[0] = 1.0;
//	for (int i = 1; i < 100; i++) {
//		arr[i] = 1 / i;
//	}
//	scanf("%lf", &x);
//	use(&cal, arr, x, 100);
//	use(&cal2, arr, x, 10);
//	return 0;
//}

//int main() {
//    int salary;
//    scanf("%d", &salary);
//
//    double sum = 0;
//    if (salary <= 1600) printf("%.2f\n", sum);
//    else if (salary <= 2500) {
//        sum = (salary - 1600) * 0.05;
//        printf("%.2f\n", sum);
//    }
//    else if (salary <= 3500) {
//        sum = (salary - 1600) * 0.10;
//        printf("%.2f\n", sum);
//    }
//    else if (salary <= 4500) {
//        sum += (salary - 1600) * 0.15;
//        printf("%.2f\n", sum);
//    }
//    else if (salary > 4500) {
//        sum += (salary - 1600) * 0.2;
//        printf("%.2f\n", sum);
//    }
//    return 0;
//}

//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a) {
//        double per = a + b + c;
//        double s = per / 2;
//        double area = sqrt(s * (s - a) * (s - b) * (s - c));
//        printf("area = %.2f; perimeter = %.2f\n", area, per);
//    }
//    else printf("These sides do not correspond to a valid triangle\n");
//    return 0;
//}

//int main() {
//    double a, b, c;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double de = b * b - 4 * a * c;
//    if (a == 0 && b == 0 && c == 0) {
//        printf("Zero Equation\n");
//        return 0;
//    }
//    if (a == 0 && b == 0 && c) {
//        printf("Not An Equation\n");
//        return 0;
//    }
//    if (a == 0) {
//        if (c == 0) printf("0.00\n");
//        else printf("%.2f", -c / b);
//    }
//    else {
//        if (de < 0) {
//            de = sqrt(-de);
//            if (b) {
//                printf("%.2f+%.2fi\n", -b / (2 * a), de / (2 * a));
//                printf("%.2f-%.2fi\n", -b / (2 * a), de / (2 * a));
//            }
//            else {
//                printf("0.00+%.2fi\n", de / (2 * a));
//                printf("0.00-%.2fi\n", de / (2 * a));
//            }
//        }
//        else if (de > 0) {
//            de = sqrt(de);
//            double x1, x2;
//            x1 = -b / (2 * a) + de / (2 * a);
//            x2 = -b / (2 * a) - de / (2 * a);
//            if (x1 == 0) x1 = 0;
//            if (x2 == 0) x2 = 0;
//            printf("%.2f\n", x1);
//            printf("%.2f\n", x2);
//        }
//        else printf("%.2f\n", -b / (2 * a));
//    }
//    return 0;
//}

//int main() {
//    int year, mon, day;
//    scanf("%d/%d/%d", &year, &mon, &day);
//    int arr[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int sum = day;
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//        for (int i = 0; i < mon - 1; i++) {
//            sum += arr[i];
//        }
//        printf("%d", sum);
//    }
//    else {
//        arr[1] = 28;
//        for (int i = 0; i < mon - 1; i++) sum += arr[i];
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}

//int main() {
//    int n = 0, sum = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        int sum2 = 1;
//        for (int j = 1; j <= i; j++) sum2 *= j;
//        sum += sum2;
//    }
//    printf("%d", sum);
//    return 0;
//}

//int main() {
//    double eps;
//    scanf("%lf", &eps);
//
//    double sum = 0.0;
//    double term = 1.0;
//    int sign = 1;
//    int n = 1;
//
//    while (fabs(term) > eps) {
//        sum += term;
//        sign = -sign;
//        n += 3;
//        term = sign / (double)n;
//    }
//    sum += term;
//
//    printf("sum = %.6f\n", sum);
//
//    return 0;
//}

//int main() {
//    int st, be;
//    scanf("%d %d", &st, &be);
//    int count = 0, sum = 0;
//    for (int i = st; i <= be; i++) {
//        int j = 2;
//        for (; j < i; j++) {
//            if (i % j == 0) break;
//        }
//        if (j == i) {
//            count++;
//            sum += i;
//        }
//    }
//    printf("%d %d", count, sum);
//    return 0;
//}


//int main() {
//    int a, n, sum = 0;
//    scanf("%d %d", &a, &n);
//    for (int i = 0; i < n; i++) {
//        int sum2 = a;
//        for (int j = 0; j < i; j++) {
//            sum2 = sum2 * 10 + a;
//        }
//        sum += sum2;
//    }
//    printf("s = %d", sum);
//    return 0;
//}

//int main() {
//    int M, N, a;
//    scanf("%d %d", &M, &N);
//    for (a = M; a % N != 0; a += M);
//    while (M % N) {
//        int c = M % N;
//        M = N;
//        N = c;
//    }
//    printf("%d %d\n", N, a);
//    return 0;
//}

//int main() {
//    double pi = 0, tmp = 1, esp;
//    int a = 1;
//    scanf("%lf", &esp);
//    while (tmp > esp) {
//        double mo = 1, son = 1;
//        for (int i = 1; i <= a; i++) {
//            mo *= 2.0 * i - 1.0;
//        }
//        for (int i = 1; i < a; i++) {
//            son *= (double)i;
//        }
//        a++;
//        tmp = son / mo;
//        pi += tmp;
//    }
//    printf("%.6f\n", pi * 2);
//    return 0;
//}

//int main() {
//    int n, up, down;
//    scanf("%d %d %d", &n, &up, &down);
//    int sum = up, min = 1;
//    while (sum < n) {
//        sum += up - down;
//        min += 2;
//    }
//    printf("%d", min);
//    return 0;
//}

//int main() {
//    int a;
//    scanf("%d", &a);
//    int* arr = (int*)malloc(a);
//    for (int i = 0; i < a; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int b = 0, c = 0;
//    for (int i = 0; i < a; i++) {
//        b += arr[i] % 2;
//    }
//    free(arr);
//    c = a - b;
//    printf("%d %d", b, c);
//    return 0;
//}

//int main() {
//	int i = 0, num;
//	while (1) {
//		scanf("%d", &num);
//		i++;
//		if (num == 250) break;
//	}
//	printf("%d", i);
//	return 0;
//}

//int main() {
//    int num, i, mem = 0, maxlen = 0,;
//    scanf("%d", &num);
//    for (i = 2; i * i <= num; i++) {
//        int j = i, tmp = num;
//        while (1) {
//            if (tmp % j != 0) break;
//            else {
//                tmp /= j;
//            }
//            j++;
//        }
//        if (maxlen < j - i) {
//            mem = i;
//            maxlen = j - i;
//        }
//    }
//    printf("%d\n", maxlen);
//    while (--maxlen) printf("%d*", mem++);
//    printf("%d", mem);
//
//    return 0;
//}

//int main() {
//    int N;
//    scanf("%d", &N);
//    int maxLen = 0;
//    int maxSeqStart = 0;
//
//    for (int i = 2; i * i <= N; i++) {
//        int j = i;
//        int product = 1;
//        while (1) {
//            product *= j;
//            if (N % product != 0) {
//                break;
//            }
//            if (j - i + 1 > maxLen) {
//                maxLen = j - i + 1;
//                maxSeqStart = i;
//            }
//            j++;
//        }
//    }
//
//    if (maxLen == 0) {
//        printf("1\n%d\n", N);
//    }
//    else {
//        printf("%d\n", maxLen);
//        for (int i = maxSeqStart; i < maxSeqStart + maxLen; i++) {
//            if (i < maxSeqStart + maxLen - 1) {
//                printf("%d*", i);
//            }
//            else {
//                printf("%d\n", i);
//            }
//        }
//    }
//
//    return 0;
//}

//int main() {
//    double height, sum = 0;
//    int n;
//    scanf("%lf %d", &height, &n);
//    sum -= height;
//    height *= 2;
//    for (int i = 0; i < n; i++) {
//        sum += height;
//        height /= 2;
//    }
//    printf("%.1f %.1f", sum, height / 2);
//    return 0;
//}

//int main() {
//    int n, last = 0, now = 1, month = 1;
//    scanf("%d", &n);
//    for (month = 1; now < n; month++) {
//        int tmp = now;
//        now += last;
//        last = tmp;
//    }
//    printf("%d\n", month);
//    return 0;
//}

//int* sort(int num) {
//    int* n = (int*)malloc(sizeof(int) * 3);
//    for (int i = 0; i < 3; i++) {
//        n[i] = num % 10;
//        num /= 10;
//    }
//    for (int i = 0; i < 3; i++) {
//        int min = i;
//        for (int j = i; j < 3; j++) {
//            if (n[j] < n[min]) min = j;
//        }
//        if (i != min) {
//            char tmp = n[min];
//            n[min] = n[i];
//            n[i] = tmp;
//        }
//    }
//    return n;
//}
//
//int a = 0;
//
//void print(int num) {
//    a++;
//    int min = 0, max = 0;
//    int* nArr = sort(num);
//    for (int i = 0; i < 3; i++) {
//        min = min * 10 + nArr[i];
//    }
//    for (int i = 2; i >= 0; i--) {
//        max = max * 10 + nArr[i];
//    }
//    free(nArr);
//    printf("%d: %d - %d = %d", a, max, min, max - min);
//    if (max - min == 0) return;
//    if (max - min != 495) {
//        printf("\n");
//        print(max - min);
//    }
//
//}
//
//int main() {
//    int num;
//    scanf("%d", &num);
//    print(num);
//
//    return 0;
//}


//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
//
//int Count_Digit(const int N, const int D) {
//    if (N < 0) return Count_Digit(-N, D);
//    if (N < 10) return N == D ? 1 : 0;
//    else {
//        if (N % 10 == D) return 1 + Count_Digit(N / 10, D);
//        else return Count_Digit(N / 10, D);
//    }
//}


//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//
//void Print_Factorial(const int N) {
//    if (N < 0) printf("Invalid input\n");
//    else {
//        long long mod = 1;
//        for (int i = 1; i <= N; i++) {
//            mod *= i;
//        }
//        printf("%llu\n", mod);
//    }
//}

//#include <string.h>
//
//#define MAX_DIGITS 3000
//
//void Print_Factorial(const int N) {
//    if (N < 0) {
//        printf("Invalid input\n");
//        return;
//    }
//    if (N == 0) {
//        printf("1\n");
//        return;
//    }
//
//    int result[MAX_DIGITS] = { 0 };
//    result[0] = 1; // 初始化结果为1
//    int result_size = 1; // 结果的当前大小
//
//    // 计算阶乘
//    for (int x = 2; x <= N; x++) {
//        int carry = 0;
//        for (int i = 0; i < result_size; i++) {
//            int prod = result[i] * x + carry;
//            result[i] = prod % 10; // 存储当前位的结果
//            carry = prod / 10; // 计算进位
//        }
//
//        // 处理剩余的进位
//        while (carry) {
//            result[result_size] = carry % 10;
//            carry = carry / 10;
//            result_size++;
//        }
//    }
//
//    // 打印结果
//    for (int i = result_size - 1; i >= 0; i--) {
//        printf("%d", result[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int N = 0;
//    scanf("%d", &N);
//    Print_Factorial(N);
//
//    return 0;
//}

//void pyramid(int n) {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j < n - i; j++) {
//            printf(" ");
//        }
//        for (int j = 0; j < i; j++) {
//            printf("%d ", i);
//        }
//        printf("\n");
//    }
//}

//int narcissistic(int num) {
//    int sum = 0, tmp = num;
//    while (num) {
//        int o = num % 10;
//        sum += o * o * o;
//        num /= 10;
//    }
//    return sum == tmp;
//}
//
//void PrintN(int m, int n) {
//    for (int i = m + 1; i < n; i++) {
//        if (narcissistic(i)) printf("%d\n", i);
//    }
//}
//
//int main() {
//    PrintN(153, 4000);
//    return 0;
//}

//
//int factorsum(int number) {
//    int sum = 0;
//    for (int i = 1; i < number; i++) {
//        if (number % i == 0) sum += i;
//    }
//    return sum;
//}
//
//void PrintPN(int m, int n) {
//    int flag = 0;
//    for (int i = m; i <= n; i++) {
//        if (factorsum(i) == i) {
//            flag = 1;
//            printf("%d = 1 ", i);
//            for (int j = 2; j < i; j++) {
//                if (i % j == 0) printf("+ %d ", j);
//            }
//            printf("\n");
//        }
//    }
//    if (!flag) printf("No perfect number\n");
//}
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}

//int fib(int n) {
//    if (n < 3) return 1;
//    int a = 1, b = 1, c;
//    for (int i = 3; i <= n; i++) {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return c;
//}
//
//void PrintFN(int m, int n) {
//    int i = 1, flag = 0;
//    while (fib(i) <= n) {
//        if (fib(i) >= m) {
//            flag = 1;
//            if (fib(i + 1) <= n) printf("%d ", fib(i));
//            else printf("%d", fib(i));
//        }
//        i++;
//    }
//    if (!flag) printf("No Fibonacci number\n");
//    else printf("\n");
//}
//
//int main() {
//    int m, n, t;
//    scanf("%d %d %d", &m, &n, &t);
//    printf("fib(%d) = %d\n", t, fib(t));
//    PrintFN(m, n);
//    return 0;
//}

//int prime(int p);
//void Goldbach(int n);
//
//int main()
//{
//    int m, n, i, cnt;
//
//    scanf("%d %d", &m, &n);
//    if (prime(m) != 0) printf("%d is a prime number\n", m);
//    if (m < 6) m = 6;
//    if (m % 2) m++;
//    cnt = 0;
//    for (i = m; i <= n; i += 2) {
//        Goldbach(i);
//        cnt++;
//        if (cnt % 5) printf(", ");
//        else printf("\n");
//    }
//
//    return 0;
//}
//
//int prime(int p) {
//    int i = 2;
//    for (; i <= p; i++) {
//        if (p % i == 0) break;
//    }
//    return i == p ? 1 : 0;
//}
//
//void Goldbach(int n) {
//    for (int i = 2; i + i < n; i++) {
//        if (prime(i)) {
//            if (prime(n - i)) {
//                printf("%d=%d+%d", n, i, n - i);
//                continue;
//            }
//        }
//    }
//}

//int f(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", f(n));
//
//    return 0;
//}
//
//int f(int n);
//
//int f(int n) {
//    if (n < 3) return 1;
//    else return f(n - 1) + f(n - 2);
//}
//
//int main() {
//    int num;
//    char c;
//    scanf("%d %c", &num, &c);
//    int n = 1;
//    while (1) {
//        if (2 * n * n <= num + 1 && 2 * (n + 1) * (n + 1) > num + 1) break;
//        n++;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < i; j++) printf(" ");
//        for (int j = 0; j < 2 * (n - i) - 1; j++) printf("%c", c);
//        printf("\n");
//    }
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 2 - i; j++) printf(" ");
//        for (int j = 0; j < 2 * (i + 1) + 1; j++) printf("%c", c);
//        printf("\n");
//    }
//    printf("%d", num - (2 * n * n - 1));
//    return 0;
//}


//void limitedSort(int* arr, int len, int k) {
//    for (int i = 0; i < k; i++) {
//        for (int j = 0; j < len - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//int main() {
//    int a, k;
//    scanf("%d %d", &a, &k);
//    int* arr = (int*)malloc(sizeof(int) * a);
//    for (int i = 0; i < a; i++) {
//        scanf("%d", &arr[i]);
//    }
//    limitedSort(arr, a, k);
//    int count = 0;
//    for (int i = 0; i < a; i++) {
//        if (i) {
//            count++;
//            printf(" ");
//        }
//        printf("%d", arr[i]);
//    }
//    printf("\n%d", count);
//    free(arr);
//    return 0;
//}
//dp[i] = (dp[i] > (j > dp[j] ? j : dp[j]) * (i - j > dp[i - j] ? i - j : dp[i - j])) ? dp[i] : (j > dp[j] ? j : dp[j]) * (i - j > dp[i - j] ? i - j : dp[i - j]);


//int n, store[30], place = -1, count = 0, sum = 0;
//
//int recursion(int i) {
//	if (sum == n) {
//		count++;
//		printf("%d=", n);
//		for (int i = 0; i < place; i++) {
//			printf("%d+", store[i]);
//		}
//		if (count % 4 == 0) printf("%d\n", store[place]);
//		else if (store[place] == n) printf("%d", store[place]);
//		else printf("%d;", store[place]);
//		return 0;
//	}
//	if (sum > n) return 0;
//	for (int j = i; j <= n; j++) {
//		place++;
//		store[place] = j;
//		sum += j;
//		recursion(j);
//		sum -= j;
//		place--;
//	}
//
//}
//
//int main() {
//	scanf("%d", &n);
//	recursion(1);
//	return 0;
//}


//int main() {
//	int a = 123;
//	char* b = itoa
//	printf("%d", a);
//	return 0;
//}

//int count = 0, N, top = -1, sum = 0, store[30] = { 0 };
//
//void fan(int n) {
//    if (sum == N) {//输出
//        count++;
//        printf("%d=", N);
//        for (int i = 0; i < top; i++) {
//            printf("%d+", store[i]);
//        }
//
//        if (count % 4 == 0) {
//            printf("%d\n", store[top]);
//        }
//        else if (store[top] == N) {
//            printf("%d", store[top]);
//        }
//        else {
//            printf("%d;", store[top]);
//        }
//        return;
//    }
//    else if (sum > N) return;
//
//    for (int i = n; i <= N; i++) {
//        top++;
//        sum += i;
//        store[top] = i;
//        fan(i);
//        top--;
//        sum -= i;
//    }
//}
//
//int main() {
//    scanf("%d", &N);
//    fan(1);
//    return 0;
//}

//void fan(int a) {
//    int maxLenbegin = a, len = 0;
//    
//    for (int i = 2; i < a / i; i++) {
//        int count = 0, tmp = a;
//        for (int j = i; j * (j + 1) <= a; j++) {
//            if (tmp % j == 0) {
//                count++;
//                tmp /= j;
//            }
//            else break;
//        }
//        if (count > len) {
//            len = count;
//            maxLenbegin = i;
//        }
//    }
//
//    printf("%d\n", len);
//    printf("%d", maxLenbegin);
//    for (int i = 1; i < len; i++) {
//        printf("*%d", maxLenbegin + i);
//    }
//}
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    fan(a);
//    return 0;
//}

//int store[30] = { 0 }, top = -1;
//
//int is_prime(int a) {
//    int flag = 1;
//    for (int j = 2; j < a / j; j++) {
//        if (a % j == 0) flag = 0;
//    }
//    return flag;
//}
//
//void fa(long a) {
//    long tmp = a;
//    store[0] = tmp;
//    for (int i = 2; i <= a; i++) {
//        if (is_prime(i) && tmp % i == 0) {
//            tmp /= i;
//            store[++top] = i;
//            i--;
//        }
//    }
//    printf("%ld=", a);
//
//    int i = 0, j = i;
//    for (; store[j] == store[i]; j++);
//    printf("%d", store[i]);
//    if (j - i != 1) printf("^%d", j - i);
//
//    while (j <= top) {
//        i = j;
//        for (; store[j] == store[i]; j++);
//        printf("*%d", store[i]);
//        if (j - i != 1) printf("^%d", j - i);
//    }
//}
//
//int main() {
//    long a;
//    scanf("%d", &a);
//    fa(a);
//    return 0;
//}

//int store[30] = { 0 }, top = -1;
//
//void fa(long a) {
//    if (a == 1) {
//        printf("1=1");
//        return;
//    }
//    long tmp = a;
//
//    for (int i = 2; i <= a; i++) {
//        if (tmp % i == 0 && tmp ) {
//            tmp /= i;
//            store[++top] = i;
//            i--;
//        }
//    }
//    printf("%ld=", a);
//
//    int i = 0, j = i;
//    for (; store[j] == store[i]; j++);
//    printf("%d", store[i]);
//    if (j - i != 1) printf("^%d", j - i);
//
//    while (j <= top) {
//        i = j;
//        for (; store[j] == store[i]; j++);
//        printf("*%d", store[i]);
//        if (j - i != 1) printf("^%d", j - i);
//    }
//}
//
//int main() {
//    long a;
//    scanf("%ld", &a);
//    fa(a);
//    return 0;
//}

//int count = 0;
//
//int Insertion_sort(int arr[], int len) {
//	for (int i = 1; i < len; i++) {
//		int tmp = arr[i], j = i;
//		for (j = i ; j > 0 && tmp < arr[j-1]; j--) {
//			arr[j] = arr[j - 1];
//			count++;
//		}
//		if (j != i) arr[j] = tmp;
//	}
//	return count;
//}
//
//int Bubble_Sort(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int flag = 0;
//		for (int j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				count++;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (!flag) break;
//	}
//	return count;
//}
//
//int main() {
//	int arr[] = { 34, 8, 64, 51, 32, 21 };
//	int len = sizeof(arr) / sizeof(int);
//	//printf("%d", Insertion_sort(arr, len));
//	printf("%d", Bubble_Sort(arr, len));
//	return 0;
//}


typedef struct MaxSubseqSum {
    int value;
    int count;
    int pos;
}MaxSuSum;

int main() {
    int N, Count = 0, flag = 1;
    int Sum = 0;
    MaxSuSum S1 = { 0 };

    scanf("%d", &N);
    S1.count = N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        Sum += arr[i];
        Count++;

        if (Sum < 0) {
            Sum = 0;
            flag = 1;
            continue;
        }
        if (Sum > S1.value) {
            S1.value = Sum;
            S1.count = Count;
            if (flag) {
                S1.pos = i;
                flag = 0;
            }
        }
    }

    if (S1.value < 0) printf("%d %d %d", S1.value, arr[S1.pos], arr[S1.pos + S1.count - 2]);
    else printf("%d %d %d", S1.value, arr[S1.pos], arr[S1.count - 1]);
    return 0;
}