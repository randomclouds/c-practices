#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// ����ڵ�ṹ
struct Node {
    int data;
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
    }
}

// ��������ӡ����Ԫ��
void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // ������ĩβ����ڵ�
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    // ��ӡ����Ԫ��
    display(head);

    return 0;
}
