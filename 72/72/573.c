#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char str[101] = { 0 }; // ����101���ַ��Ŀռ䣬���һ�����ڴ洢�ַ�������ֹ��'\0'
	scanf("%s", str); // ��ȡ�ַ���
	int sum = 0; // ���ڴ洢�ۼӺ�

	// �����ַ����е�ÿ���ַ�
	for (int i = 0; str[i] != '\0'; i++) {
		sum += (unsigned char)str[i]; // ���ַ���ASCIIֵ�ۼӵ�sum��
	}

	int checksum = sum & 0xFF; // ȡsum�����һ���ֽ���ΪУ���
	printf("%d\n", checksum); // ���У��͵�ʮ����ֵ
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