#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

//ջ�ṹ
struct Stack {
    int top;
    int capacity;
    int* array;
};

// ����һ��ջ
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("����ʧ��\n");
        return NULL;
    }
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(capacity * sizeof(int));
    return stack;
}

// �ж�ջ�Ƿ�Ϊ��
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// �ж�ջ�Ƿ�����
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// ��ջ
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("ջ��\n");
        return;
    }
    stack->top++;
    stack->array[stack->top] = item;
    printf("��ջ %d\n", item);
}

// ��ջ
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("ջ��\n");
        return -1;
    }
    int item = stack->array[stack->top];
    stack->top--;
    return item;
}

// ��ȡջ��Ԫ��
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("ջ��\n");
        return -1;
    }
    return stack->array[stack->top];
}

int main() {
    struct Stack* stack = createStack(5);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("ջ�� %d\n", peek(stack));

    printf("��ջ %d\n", pop(stack));
    printf("��ջ %d\n", pop(stack));

    printf("ջ�� %d\n", peek(stack));

    return 0;
}
