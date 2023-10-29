#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// 链表节点结构
struct Node {
    int data;
    struct Node* prev;
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

// 遍历并打印链表元素（正向）
void displayForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

//获取尾节点
struct Node* getTail(struct Node* index) {
    struct Node* current = index;
    while (current->next != NULL && current != NULL) {
        current = current->next;
    }
    return current;
}

// 遍历并打印链表元素（反向）
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

    // 在链表末尾插入节点
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    // 打印链表元素（正向）
    printf("正向: ");
    displayForward(head);

    // 打印链表元素（反向）
    printf("方向: ");
    displayBackward(getTail(head));

    return 0;
}
