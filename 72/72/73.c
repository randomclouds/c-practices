#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int longest_common_substring(char* s1, char* s2) {
//    int m = strlen(s1);
//    int n = strlen(s2);
//    int dp[101][101] = { 0 }; // Initialize the array with 0
//    int max_len = 0;
//    for (int i = 1; i <= m; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (tolower(s1[i - 1]) == tolower(s2[j - 1])) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//                max_len = (max_len > dp[i][j]) ? max_len : dp[i][j];
//            }
//            else {
//                dp[i][j] = 0;
//            }
//        }
//    }
//    return max_len;
//}
//
//float similarity(char* s1, char* s2) {
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    int lcs = longest_common_substring(s1, s2);
//    float similarity_score = 2.0 * lcs / (len1 + len2);
//    return similarity_score;
//}
//
//int main() {
//    char s1[101], s2[101];
//    fgets(s1, 101, stdin);
//    fgets(s2, 101, stdin);
//    s1[strcspn(s1, "\n")] = 0; // remove newline character
//    s2[strcspn(s2, "\n")] = 0; // remove newline character
//    printf("%.3f\n", similarity(s1, s2));
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char isbn[14]; // 为了容纳分隔符和结束符，长度设为14
//    fgets(isbn, 14, stdin);
//
//    // 去除输入中的分隔符“-”
//    char isbn_digits[10];
//    int j = 0;
//    for (int i = 0; i < 13; i++) {
//        if (isbn[i] != '-') {
//            isbn_digits[j] = isbn[i];
//            j++;
//        }
//    }
//    isbn_digits[9] = '\0'; // 添加字符串结束符
//
//    // 计算识别码
//    int total = 0;
//    for (int i = 0; i < 9; i++) {
//        total += (isbn_digits[i] - '0') * (i + 1);
//    }
//
//    // 判断识别码是否正确
//    char correct_isbn[14];
//    strcpy(correct_isbn, isbn);
//    if (total % 11 == 10) {
//        correct_isbn[12] = 'X';
//    }
//    else {
//        correct_isbn[12] = (total % 11) + '0';
//    }
//
//    // 输出结果
//    if (strcmp(isbn, correct_isbn) == 0) {
//        printf("Right\n");
//    }
//    else {
//        printf("%s", correct_isbn);
//    }
//
//    return 0;
//}

//
//int main() {
//	int time;
//	scanf("%d", &time);
//	int h, m, s;
//	h = time / 3600;
//	m = time % 3600 / 60;
//	s = time % 3600 % 60;
//	printf("%02d:%02d:%02d", h, m, s);
//	if (h <= 12) printf(" am\n");
//	else printf(" pm");
//	return 0;
//}

//int main() {
//	char str[101] = { 0 }; // 分配101个字符的空间，最后一个用于存储字符串的终止符'\0'
//	scanf("%s", str); // 读取字符串
//	int sum = 0; // 用于存储累加和
//
//	// 遍历字符串中的每个字符
//	for (int i = 0; str[i] != '\0'; i++) {
//		sum += (unsigned char)str[i]; // 将字符的ASCII值累加到sum中
//	}
//
//	int checksum = sum & 0xFF; // 取sum的最后一个字节作为校验和
//	printf("%d\n", checksum); // 输出校验和的十进制值
//	return 0;
//}


//int main() {
//	char str[101] = { 0 };
//	scanf("%s", str);
//	int len = strlen(str), sum = 0;
//	for (int i = 0; i < len; i++) {
//		sum += (int)str[i];
//	}
//	int fcs = 0;
//	for (int i = 0; i < 2; i++) {
//		fcs += sum % 16 * (int)pow(16, i);
//		sum /= 16;
//	}
//	printf("%d\n", fcs);
//	return 0;
//}

////申请空间
//int** Malloc(int row, int col) {
//	int** arr1 = (int**)malloc(sizeof(int*) * row);
//	if (arr1 == NULL) {
//		printf("Error");
//		return NULL;
//	}
//	for (int i = 0; i < row; i++) {
//		*(arr1 + i) = (int*)malloc(sizeof(int) * col);
//		if (*(arr1 + i) == NULL) {
//			printf("Error");
//			return NULL;
//		}
//	}
//	return arr1;
//}
//
////初始化
//void InitBoard(int** arr, int row, int col, int x) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			arr[i][j] = x;
//		}
//	}
//}
//
////打印
//void Print(int** arr1, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		int flag = 1;
//		for (int j = 0; j < col; j++) {
//			if (flag) {
//				printf("%d", arr1[i][j]);
//				flag = 0;
//			}
//
//			else printf(" %d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////释放空间
//void Free(int** arr1, int row) {
//	for (int i = 0; i < row; i++) {
//		free(*(arr1 + i));
//		*(arr1 + i) = NULL;
//	}
//	free(arr1);
//	arr1 = NULL;
//}
//
////程序主体
//void Find(int** mine, int** show, int row, int col) {
//	//行
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			int count = 0, k;
//			for (k = j; k < col - 1; k++) {
//				if (mine[i][k] == mine[i][k + 1]) {
//					count++;
//				}
//				else break;
//			}
//			if (count >= 2) {
//				for (int m = 0; m <= count; m++) {
//					show[i][j + m] = 0;
//				}
//				j = k;
//			}
//			else {
//				if (show[i][j] != 0) show[i][j] = mine[i][j];
//			}
//
//		}
//	}
//
//	//列
//	for (int i = 0; i < col; i++) {
//		for (int j = 0; j < row; j++) {//判读该位置以后有无消去
//			int count = 0, k;
//			for (k = j; k < row - 1; k++) {
//				if (mine[k][i] == mine[k + 1][i]) count++;
//				else break;
//			}
//
//			if (count >= 2) {
//				for (int m = 0; m <= count; m++) {
//					show[j + m][i] = 0;
//				}
//				j = k;
//			}
//
//			else {
//				if (show[j][i] != 0) show[j][i] = mine[j][i];
//			}
//
//		}
//	}
//}
//
//int main() {
//	int row, col;
//	scanf("%d %d", &row, &col);
//	int** mine = Malloc(row, col);
//	int** show = Malloc(row, col);
//	InitBoard(show, row, col, -1);
//
//	for (int i = 0; i < row; i++) {
//		int flag = 1;
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &mine[i][j]);
//		}
//	}
//
//	Find(mine, show, row, col);
//
//	printf("\n");
//	Print(show, row, col);
//	Free(mine, row);
//	Free(show, row);
//	return 0;
//}

//初始化
//int** Malloc(int row, int col);
//
////打印
//void PrintfLen(int** arr, int row, int col);
//
//int main() {
//	int row, col;
//	scanf("%d %d", &row, &col);
//	int** arr = Malloc(row, col);//创建和初始化
//	PrintfLen(arr, row, col);
//	
//	return 0;
//}
//
//int** Malloc(int row, int col) {
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	if (arr == NULL) {
//		printf("Error\n");
//		return NULL;
//	}
//	for (int i = 0; i < col; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * col);
//		if (arr[i] == NULL) {
//			printf("Error\n");
//			return NULL;
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	return arr;
//}
//
//void PrintfLen(int** arr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		int be = -1, end = -1, Count = 0;
//		for (int j = 0; j < col; j++) {
//			int k, count = 0;
//			for (k = j; k < col; k++) {
//				if (arr[i][k] == 1) count++;
//				else break;
//			}
//			if (count > Count) {
//				be = j;
//				Count = count;
//				end = be + Count - 1;
//			}
//		}
//		printf("%d %d\n", be, end);
//	}
//}




//newBuild
//int** Malloc(int row, int col);
//
////read
//void Read(int** arr, int row, int col);
//
////print
//void Print(int** arr, int row, int col);
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	int** arr = Malloc(a, a);
//	Read(arr, a, a);
//
//	//打印
//	return 0;
//}
//
//int** Malloc(int row, int col) {
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	if (arr == NULL) {
//		printf("Error\n");
//		return NULL;
//	}
//	for (int i = 0; i < row; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * col);
//		if (arr[i] == NULL) {
//			printf("Error\n");
//			return NULL;
//		}
//	}
//
//	return arr;
//}
//
//void Read(int** arr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", arr[i][j]);
//		}
//	}
//}
//
//void Print(int** arr, int row, int col) {
//	for 
//}

//int is_Narcissus(int a) {
//    int sum = 0, b, tmp = a;
//    if (a < 100) return 0;
//    else if (a < 1000) {
//        while (a) {
//            b = a % 10;
//            sum += b * b * b;
//            a /= 10;
//        }
//        return sum == tmp;
//    }
//    else {
//        while (a) {
//            b = a % 10;
//            sum += b * b * b * b;
//            a /= 10;
//        }
//        return sum == tmp;
//    }
//}
//
//int function(int a, int b) {
//    int count = 0;
//    int min, max;
//    min = a < b ? a : b;
//    max = a > b ? a : b;
//    for (int i = min; i <= max; i++) {
//        if (is_Narcissus(i)) count++;
//    }
//    return count;
//}


//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//    printf("%d", function(a, b));
//
//	
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int** Malloc(int row, int col);
//
//void InitBoard(int** arr, int row, int col);
//
//void Print(int** arr, int row, int col);
//
//int main() {
//	int a;
//	scanf("%d", &a);
//	int** arr = Malloc(a, a);
//	InitBoard(arr, a, a);
//
//	Print(arr, a, a);
//	return 0;
//}
//
//int** Malloc(int row, int col) {
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	if (arr == NULL) {
//		printf("Error\n");
//		return NULL;
//	}
//	for (int i = 0; i < row; i++) {
//		arr[i] = (int*)malloc(sizeof(int) * col);
//		if (arr[i] == NULL) {
//			printf("Error\n");
//			return NULL;
//		}
//	}
//
//	return arr;
//}
//
//
//void InitBoard(int** arr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//}
//
//void Print(int** arr, int row, int col) {
//	int i = 0, j = 0, flag = 1;
//	while (1) {
//		printf("%d ", arr[i][j]);
//		if (flag == 1) {
//			i--;
//			j++;
//			if (i < 0 && j < col) {
//				flag = 0;
//				i++;
//			}
//			if (j >= col) {
//				flag = 0;
//				j--;
//				i += 2;
//			}
//		}
//		else {
//			i++;
//			j--;
//			if (i >= row) {
//				flag = 1;
//				i--;
//				j += 2;
//			}
//			if (j < 0 && i < row) {
//				flag = 1;
//				j++;
//			}
//		}
//		if (i == row - 1 && j == col - 1) {
//			printf("%d\n", arr[i][j]);
//			break;
//		}
//	}
//
//}

//double** Malloc(int row, int col);
//
////void InitBoard(int** arr, int row, int col);
//
//void Print(double** arr, int row, int col);
//
//int main() {
//	int a = 3;
//	double q[4] = { 0 };
//
//	int flag = 1;
//	for (int i = 0; i < 4; i++) {
//		if (flag) {
//			scanf("%lf", &q[i]);
//			flag = 0;
//		}
//		else scanf(",%lf", &q[i]);
//	}
//	double** arr = Malloc(a, a);
//
//	arr[0][0] = pow(q[0], 2) + pow(q[1], 2) - pow(q[2], 2) - pow(q[3], 2);
//	arr[0][1] = 2 * (q[1] * q[2] - q[0] * q[3]);
//	arr[0][2] = 2 * (q[1] * q[3] + q[0] * q[2]);
//	arr[1][0] = 2 * (q[1] * q[2] + q[0] * q[3]);
//	arr[1][1] = pow(q[0], 2) - pow(q[1], 2) + pow(q[2], 2) - pow(q[3], 2);
//	arr[1][2] = 2 * (q[1] * q[3] - q[0] * q[1]);
//	arr[2][0] = 2 * (q[1] * q[3] - q[0] * q[2]);
//	arr[2][1] = 2 * (q[2] * q[3] + q[0] * q[1]);
//	arr[2][2] = pow(q[0], 2) - pow(q[1], 2) - pow(q[2], 2) + pow(q[3], 2);
//	//InitBoard(arr, a, a);
//
//	Print(arr, a, a);
//	return 0;
//}
//
//double** Malloc(int row, int col) {
//	double** arr = (double**)malloc(sizeof(double*) * row);
//	if (arr == NULL) {
//		printf("Error\n");
//		return NULL;
//	}
//	for (int i = 0; i < row; i++) {
//		arr[i] = (double*)malloc(sizeof(double) * col);
//		if (arr[i] == NULL) {
//			printf("Error\n");
//			return NULL;
//		}
//	}
//
//	return arr;
//}


//void InitBoard(int** arr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//}

//void Print(double** arr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			printf("%lf ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int GetMaxLen(char* sp) {
//	int MaxLen = 0, count = 0;
//	char* tmp = sp;
//	//main
//	while (*tmp) {
//		count = 0;//初始化,下面计算每个单词的长度
//		while (*tmp++ != ' ' && *tmp) {
//			count++;
//		}
//		
//		//compare
//		MaxLen = MaxLen > count ? MaxLen : count;
//	}
//	return MaxLen;
//}
//
//int main() {
//	char str[101] = { 0 };
//	fgets(str, 100, stdin);
//	int len = GetMaxLen(str);
//	printf("%d\n", len);
//return 0;
//}

//bool check(char* str, int len) {
//	//check
//	int l = 0, r = len - 1;
//	while (l < r) {
//		if (str[l++] != str[r--])
//			return false;
//	}
//
//	return true;
//}
//
//int main() {
//	char str[51] = { 0 };
//	fgets(str, 50, stdin);
//	int len = strlen(str);
//	if (str[len - 1] == '\n') {
//		str[len - 1] = '\0';
//		len--;
//	}
//	bool c = check(str, len);//check the string
//	if (c) {
//		printf("yes\n");
//	}
//	else printf("no\n");
//	return 0;
//}

//function
//void Print(char* str, int m) {
//	if (str[m - 1]) {
//		printf("%s", str + m - 1);
//		printf("\n");
//	}
//	else printf("error\n");
//}
//
//int main() {
//	char str[51] = { 0 };
//	gets(str);
//	int M;
//	scanf("%d", &M);
//
//	Print(str, M);
//	return 0;
//}

//int checkHorSym(char** pA, int n);
//int checkVerSym(char** pA, int n);
//int checkDiaSym(char** pA, int n);
//int checkAntiDiaSym(char** pA, int n);
//int checkRotSym(char** pA, int n);
//
//int main(void)
//{
//    int n, i, j, iHorSymFlag = 1, iVerSymFlag = 1, iDiaSymFlag = 1, iAntiDiaSymFlag = 1, iRotSymFlag = 1;
//    char** pA, * pTmp1, * pTmp2;
//    scanf("%d", &n);
//
//    pA = (char**)malloc(sizeof(char*) * n);
//    for (i = 0; i < n; i++)
//    {
//        pA[i] = (char*)malloc(sizeof(char) * n);
//    }
//    for (i = 0; i < n; i++)
//    {
//        pTmp1 = pA[i];
//        for (j = 0; j < n; j++)
//        {
//            scanf("%c", pTmp1);
//
//            while (*pTmp1 == ' ' || *pTmp1 == '\n')//skip spacing or line break
//            {
//                scanf("%c", pTmp1);
//            }
//            pTmp1++;
//        }
//    }
//
//
//
//    //horizental symmetry
//    iHorSymFlag = checkHorSym(pA, n);
//
//    //vertical symmetry
//    iVerSymFlag = checkVerSym(pA, n);
//
//    //diagonal symmetry
//    iDiaSymFlag = checkDiaSym(pA, n);
//
//
//    //antidiagonal symmetry
//    iAntiDiaSymFlag = checkAntiDiaSym(pA, n);
//
//    //rotationally symmetry
//    iRotSymFlag = checkRotSym(pA, n);
//
//    if (iHorSymFlag)
//        printf("1 ");
//    if (iVerSymFlag)
//        printf("2 ");
//    if (iDiaSymFlag)
//        printf("3 ");
//    if (iAntiDiaSymFlag)
//        printf("4 ");
//    if (iRotSymFlag)
//        printf("5 ");
//    printf("\n");
//
//    return 0;
//}
//
//int checkHorSym(char** pA, int n) {
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n / 2; j++) {
//            if (pA[i][j] != pA[i][n - 1 - j]) return 0;
//        }
//    }
//    return 1;
//}
//
//int checkVerSym(char** pA, int n) {
//    int i, j;
//    for (i = 0; i < n / 2; i++) {
//        for (j = 0; j < n; j++) {
//            if (pA[i][j] != pA[n - i - 1][j]) return 0;
//        }
//    }
//    return 1;
//}
//
//int checkDiaSym(char** pA, int n) {
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < i; j++) {
//            if (pA[i][j] != pA[j][i]) return 0;
//        }
//    }
//    return 1;
//}
//
//int checkAntiDiaSym(char** pA, int n) {
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (pA[i][j] != pA[n - j - 1][n - i - 1]) return 0;
//        }
//    }
//    return 1;
//}
//
//int checkRotSym(char** pA, int n) {
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            if (pA[i][j] != pA[n - 1 - i][n - j - 1]) return 0;
//        }
//    }
//    return 1;
//}

//#define ROW 100
//#define COL 100
//
//void paint(int, int(*)[4], int*);
//
//int main()
//{
//	int n, l[100][4];
//	int result[300];
//	int i;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d%d", &l[i][0], &l[i][1], &l[i][2], &l[i][3]);
//	}
//
//	paint(n, l, result);
//	for (i = 0; i <= result[0]; i++)
//	{
//		printf("%d %d\n", result[i * 2], result[i * 2 + 1]);
//	}
//
//	return 0;
//}
//
//void paint(int num, int (*p)[4], int* res) {
//	char str[ROW][COL];
//	for (int i = 0; i < ROW; i++) {//InitBoard
//		for (int j = 0; j < COL; j++) {
//			str[i][j] = '0';
//		}
//	}
//	for (int m = 0; m < num; m++) {
//		int* tmp = *(p + m);
//		for (int i = tmp[1]; i < tmp[3]; i++) {
//			for (int j = tmp[0]; j < tmp[2]; j++) {
//				str[i][j] += 1;
//			}
//		}
//	}
//
//	int respos = 0, flag = 0;//this variable should be placed out of the loop
//	for (int k = num; k >= 0; k--) {//calculate the painted squres
//		int count = 0;
//		for (int i = 0; i < ROW; i++) {
//			for (int j = 0; j < COL; j++) {
//				if (str[i][j] - '0' == k) count++;
//			}
//		}
//		if (count) flag = 1;
//
//		if (flag) {
//			res[respos++] = k;
//			res[respos++] = count;
//		}
//	}
//}

//void Find(char* src);
//
//int main() {
//    char src[1000] = { 0 };
//    scanf("%s", src);
//    Find(src);
//    return 0;
//}
//
//void Find(char* src) {//代码主体
//    char det[50][50] = { 0 };
//    int spos = 0, dpos = 0, count = 0, flag = 0;//flag用来保证count从0开始
//    int srclen = strlen(src);
//    for (; spos < srclen;) {//这里使用while循环也可以
//        if (isdigit(src[spos])) {
//            det[count][dpos++] = src[spos++];
//            flag = 1;
//        }
//        else {
//            if (flag) count++;
//            while (!isdigit(src[spos]) && spos < srclen) spos++;
//            dpos = 0;
//        }
//    }
//    if (isdigit(src[spos - 1])) count++;//这里有一个小补丁
//
//    for (int i = 0; i < count; i++) {
//        int flag = 1, len = strlen(det[i]), j = 0;
//        if (len == 2) {
//            if (abs(det[i][j + 1] - det[i][j]) != 1) flag = 0;
//        }
//        else if (len > 2) {
//            int diff = det[i][1] - det[i][0];
//            for (j = 0; j < len - 1; j++) {
//                if (det[i][j + 1] - det[i][j] != diff) {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag && abs(det[i][len - 1] - det[i][len - 2]) != 1) {
//                flag = 0;
//            }
//        }
//        if (flag) printf("%s\n", det[i]);
//    }
//}
