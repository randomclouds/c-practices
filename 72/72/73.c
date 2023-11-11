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

#include <stdio.h>
#include <string.h>

int main() {
    char isbn[14]; // 为了容纳分隔符和结束符，长度设为14
    fgets(isbn, 14, stdin);

    // 去除输入中的分隔符“-”
    char isbn_digits[10];
    int j = 0;
    for (int i = 0; i < 13; i++) {
        if (isbn[i] != '-') {
            isbn_digits[j] = isbn[i];
            j++;
        }
    }
    isbn_digits[9] = '\0'; // 添加字符串结束符

    // 计算识别码
    int total = 0;
    for (int i = 0; i < 9; i++) {
        total += (isbn_digits[i] - '0') * (i + 1);
    }

    // 判断识别码是否正确
    char correct_isbn[14];
    strcpy(correct_isbn, isbn);
    if (total % 11 == 10) {
        correct_isbn[12] = 'X';
    }
    else {
        correct_isbn[12] = (total % 11) + '0';
    }

    // 输出结果
    if (strcmp(isbn, correct_isbn) == 0) {
        printf("Right\n");
    }
    else {
        printf("%s", correct_isbn);
    }

    return 0;
}