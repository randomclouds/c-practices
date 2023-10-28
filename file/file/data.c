#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// 链表节点结构
struct Node {
    int data;
    struct Node* next;
};

// 在链表末尾插入节点
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("插入失败\n");
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

// 遍历并打印链表元素
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

    // 在链表末尾插入节点
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    // 打印链表元素
    display(head);

    return 0;
}
