#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// ����ڵ�ṹ
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// ������ĩβ����ڵ�
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("����ʧ��\n");
        return;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// ��������ӡ����Ԫ�أ�����
void displayForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

//��ȡβ�ڵ�
struct Node* getTail(struct Node* index) {
    struct Node* current = index;
    while (current->next != NULL && current != NULL) {
        current = current->next;
    }
    return current;
}

// ��������ӡ����Ԫ�أ�����
void displayBackward(struct Node* tail) {
    struct Node* current = tail;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // ������ĩβ����ڵ�
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    // ��ӡ����Ԫ�أ�����
    printf("����: ");
    displayForward(head);

    // ��ӡ����Ԫ�أ�����
    printf("����: ");
    displayBackward(getTail(head));

    return 0;
}
