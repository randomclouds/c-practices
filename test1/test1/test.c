#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <assert.h>

//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	float heigh;
//}p1,p2;
//
//struct st
//{
//	struct peo p;
//	int age;
//	char hobby[];
//};
//
//int main()
//{
//	struct peo p = { "�ǰ�����", "666666", "δ֪", 66.6 };
//	struct peo* ps = &p;
//	printf("%s %s %s %f", ps->name, p.tele, p.sex, p.heigh);
//	return 0;
//}

//int cal(int x, int y)
//{
//	if (y != 0)
//		return x + cal(x * 10 + 2, y - 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//����һ������
//	int ret = cal(a, b);
//	printf("%d", ret);
//	return 0;
//}

//����a��n�η�
//int cal(int a, int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < n; i++)
//	{
//		sum *= a;
//	}
//	return sum;
//}
//
////�涨����1��ˮ�ɻ���,0����
//int judge(int x, int count)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int b = x;
//	
//	//�ѵõ���ÿλ��������
//	for (i = 0; i < count; i++)
//	{
//		arr[i] = b % 10;
//		b /= 10;
//	}
//
//	//��֤�Ƿ�Ϊˮ�ɻ���
//	int sum = 0;
//	for (i = 0; i < count; i++)
//	{
//		sum += cal(arr[i],count);
//	}
//
//	if (sum == x)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int max = 0;
//	scanf("%d", &max);
//
//	for (i = 0; i <= max; i++)
//	{
//		//�ж�λ��
//		int b = i;
//		int count = 1;
//		while (b/ 10)
//		{
//			count++;
//			b /= 10;
//		}
//		//ͨ�������ж��Ƿ�Ϊˮ�ɻ���
//		if (judge(i, count))
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		printf("%-2d\n", i);
//	}
//}

//char* my_strcpy(char* a, char* b) {
//	assert(a && b);
//	char* ret = a;
//	while (*a++ = *b++)
//		;
//	printf("%c\n", *b);
//	return ret;
//}
//
//int main() {
//	char a[] = "abcdef";
//	char b[10] = { 0 };
//	my_strcpy(b, a);
//	printf("%s", b);
//	return 0;
//}



int main() {
	int aa[2][5] = { 10, 9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}