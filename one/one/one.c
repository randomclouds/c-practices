#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>


int main() {
	struct Student {
		int num;
		char name[7];
		short age;
		char sex;
	}stu;
	printf("%d", sizeof(stu));
}