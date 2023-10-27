#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "contact.h"

//初始化
void InitContact(Contact* pc) {
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//添加联系人
void AddContact(Contact* pc) {
	assert(pc);
	if (pc->count > 100) {
		printf("通讯录已经满了,无法添加\n");
		return;
	}
	printf("请输入姓名:");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:");
	scanf("%d", &pc->data[pc->count].age);
	printf("请输入性别:");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功!\n");
}

//查找函数,只能在contact.c里使用
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

//删除
void DelContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空,没有东西删除\n");
		return;
	}
	printf("请输入要删除的名字:");
	scanf("%s", name);
	//查找
	int pos = 0;
	pos = FindByName(pc, name);
	if (pos == -1) {
		printf("联系人不存在\n");
		return;
	}
	int i = 0;
	for (i = pos; i < pc->count - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功!\n");
}

//show展示
void ShowContact(const Contact* pc) {
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%6s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++) {
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//查找
void SearchContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("输入要查找的人:");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1) {
		printf("查无此人\n");
		return;
	}
	printf("%20s\t%5s\t%5s\t%6s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
	return;
}

//修改
void ModifyContact(Contact* pc) {
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("输入要修改的人:");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1) {
		printf("要修改的人不存在\n");
		return;
	}
	printf("请输入姓名:");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别:");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pos].addr);

	printf("修改成功\n");
	return;
}


//排序方法
//name
int cmp_by_name(const void* s1, const void* s2) {
	return strcmp(((Peo*)s1)->name, ((Peo*)s2)->name);
}

//年龄
int cmp_by_age(const void* s1, const void* s2) {
	return ((Peo*)s1)->age - ((Peo*)s2)->age;
}

void SortContact(Contact* pc) {
	assert(pc);
	qsort(pc->data, pc->count, sizeof(Peo), cmp_by_name);
	printf("排序完成\n");
	return;
}