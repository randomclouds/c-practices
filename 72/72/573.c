#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char str[101] = { 0 }; // 分配101个字符的空间，最后一个用于存储字符串的终止符'\0'
	scanf("%s", str); // 读取字符串
	int sum = 0; // 用于存储累加和

	// 遍历字符串中的每个字符
	for (int i = 0; str[i] != '\0'; i++) {
		sum += (unsigned char)str[i]; // 将字符的ASCII值累加到sum中
	}

	int checksum = sum & 0xFF; // 取sum的最后一个字节作为校验和
	printf("%d\n", checksum); // 输出校验和的十进制值
	return 0;
}


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