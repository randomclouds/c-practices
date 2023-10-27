#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "contact.h"

//��ʼ��
void InitContact(Contact* pc) {
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//�����ϵ��
void AddContact(Contact* pc) {
	assert(pc);
	if (pc->count > 100) {
		printf("ͨѶ¼�Ѿ�����,�޷����\n");
		return;
	}
	printf("����������:");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:");
	scanf("%d", &pc->data[pc->count].age);
	printf("�������Ա�:");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�!\n");
}

//���Һ���,ֻ����contact.c��ʹ��
static int FindByName(Contact* pc, char name[]) {
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++) {
		if (0 == strcmp(pc->data[i].name, name)) {
			return i;
		}
	}

	return -1;
}

//ɾ��
void DelContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0) {
		printf("ͨѶ¼Ϊ��,û�ж���ɾ��\n");
		return;
	}
	printf("������Ҫɾ��������:");
	scanf("%s", name);
	//����
	int pos = 0;
	pos = FindByName(pc, name);
	if (pos == -1) {
		printf("��ϵ�˲�����\n");
		return;
	}
	int i = 0;
	for (i = pos; i < pc->count - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�!\n");
}

//showչʾ
void ShowContact(const Contact* pc) {
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%6s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++) {
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//����
void SearchContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ���ҵ���:");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1) {
		printf("���޴���\n");
		return;
	}
	printf("%20s\t%5s\t%5s\t%6s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
	return;
}

//�޸�
void ModifyContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ�޸ĵ���:");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1) {
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("����������:");
	scanf("%s", pc->data[pos].name);
	printf("����������:");
	scanf("%d", &pc->data[pos].age);
	printf("�������Ա�:");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
	return;
}


//���򷽷�
//name
int cmp_by_name(const void* s1, const void* s2) {
	return strcmp(((Peo*)s1)->name, ((Peo*)s2)->name);
}

//����
int cmp_by_age(const void* s1, const void* s2) {
	return ((Peo*)s1)->age - ((Peo*)s2)->age;
}

void SortContact(Contact* pc) {
	assert(pc);
	qsort(pc->data, pc->count, sizeof(Peo), cmp_by_name);
	printf("�������\n");
	return;
}