#pragma once
#include <string.h>
#include <stdio.h>
#include<assert.h>

#define MAX_NAME 20
#define MAX_sex 10
#define MAX_tele 12
#define MAX_addr 30

//�˵���Ϣ
typedef struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
}Peo;

//ͨѶ¼
typedef struct Contact {
	Peo data[100];
	int count;//��¼����
}Contact;

//��ʼ������
void InitContact(Contact*);

//���
void AddContact(Contact*);

//��ӡ
void ShowContact(const Contact*);

//ɾ��
void DelContact(Contact*);

//����
void SearchContact(Contact*);

//����
void ModifyContact(Contact*);
