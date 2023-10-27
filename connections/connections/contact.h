#pragma once
#include <string.h>
#include <stdio.h>
#include<assert.h>

#define MAX_NAME 20
#define MAX_sex 10
#define MAX_tele 12
#define MAX_addr 30

//人的信息
typedef struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
}Peo;

//通讯录
typedef struct Contact {
	Peo data[100];
	int count;//记录个数
}Contact;

//初始化声明
void InitContact(Contact*);

//添加
void AddContact(Contact*);

//打印
void ShowContact(const Contact*);

//删除
void DelContact(Contact*);

//查找
void SearchContact(Contact*);

//排序
void ModifyContact(Contact*);
