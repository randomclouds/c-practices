#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//#include <stdio.h>
//
//#include <stdlib.h>
//#include <ctype.h>
//
//#define MAX_LEN 100
//
//void decompress(const char* compressed, char* decompressed) {
//    int i = 0, j = 0, count;
//    while (compressed[i] != '\0' && j < MAX_LEN) {
//        if (isalpha(compressed[i])) { // 当前字符是字母
//            decompressed[j++] = compressed[i];
//            if (isdigit(compressed[i + 1])) { // 下一个字符是数字
//                count = 0;
//                i++;
//                // 计算数字表示的重复次数
//                while (isdigit(compressed[i]) && j < MAX_LEN) {
//                    count = count * 10 + (compressed[i] - '0');
//                    i++;
//                }
//                // 重复追加字符
//                for (int k = 1; k < count && j < MAX_LEN; k++) {
//                    decompressed[j++] = decompressed[j - 1];
//                }
//            }
//            else {
//                i++;
//            }
//        }
//        else { // 如果当前字符不是字母，直接跳过
//            i++;
//        }
//    }
//    decompressed[j] = '\0'; // 确保解压缩后的字符串以null终结
//}
//
//int main() {
//    char compressed[MAX_LEN];
//    char decompressed[MAX_LEN];
//
//    // 读取压缩字符串
//    printf("Enter compressed string: ");
//    scanf("%s", compressed);
//
//    // 解压缩字符串
//    decompress(compressed, decompressed);
//
//    // 输出解压缩后的字符串
//    printf("Decompressed string: %s\n", decompressed);
//
//    return 0;
//}

//int main() {
//	char s[51];
//	scanf("%s", s);
//	int len = strlen(s);
//	char tmp = 0;
//	for (int i = 0; i < len; i++) {
//		if (s[i] < '0' || s[i] > '9') {
//			tmp = s[i];
//			printf("%c", tmp);
//		}
//		else {
//			int count = 0;
//			count = s[i] - '1';
//			if (s[i + 1] >= '0' && s[i + 1] <= '9') {
//				count = (count + 1) * 10 + s[i + 1] - '1';
//				i++;
//			}
//			for (int j = 0; j < count; j++) printf("%c", tmp);
//		}
//
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char a, op = 0;
//	int o[2] = { 0 }, j = 0;
//	while(1){
//		scanf("%c", &a);
//		if (a == '\n') break;
//		if (a != ' ') {
//			if (a < '0') {
//				j--;
//				op = a;
//			}
//			else o[j] = o[j] * 10 + a - '0';
//		}
//		else j++;
//	}
//
//	switch (op) {
//	case '+':
//		printf("%d\n", o[0] + o[1]);
//		break;
//	case '-':
//		printf("%d\n", o[0] - o[1]);
//		break;
//	case '*':
//		printf("%d\n", o[0] * o[1]);
//		break;
//	case '/':
//		printf("%d\n", o[0] / o[1]);
//		break;
//	case '%':
//		printf("%d\n", o[0] % o[1]);
//		break;
//	}
//	return 0;
//}

//int main() {
//	char sam, swi, sen[101];
//	scanf("%c %c", &sam, &swi);
//	getchar();
//	scanf("%s", sen);
//	int len = strlen(sen), count = 0;
//	if (swi == '1') {
//		for (int i = 0; i < len; i++) {
//			if (sen[i] == sam) count++;
//		}
//	}
//	else {
//		for (int i = 0; i < len; i++) {
//			if (sen[i] == sam || sen[i] == sam + 32 || sen[i] == sam - 32)
//				count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main() {
//    char s[100];
//    int caseSensitive, n;
//
//    // 读取输入
//    scanf("%s", s);
//    scanf("%d", &caseSensitive);
//    scanf("%d", &n);
//
//    // 处理大小写敏感选项
//    if (caseSensitive == 0) {
//        for (int i = 0; s[i]; i++) {
//            s[i] = tolower(s[i]);
//        }
//    }
//
//    char text[100][100];
//    for (int i = 0; i < n; i++) {
//        scanf("%s", text[i]);
//        if (caseSensitive == 0) {
//            for (int j = 0; text[i][j]; j++) {
//                text[i][j] = tolower(text[i][j]);
//            }
//        }
//    }
//
//    // 检查每行文字是否包含给定字符串
//    for (int i = 0; i < n; i++) {
//        if (strstr(text[i], s) != NULL) {
//            printf("%s\n", text[i]);
//        }
//    }
//
//    return 0;
//}