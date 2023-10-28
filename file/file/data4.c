#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

//栈结构
struct Stack {
    int top;
    int capacity;
    int* array;
};

// 创建一个栈
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("创建失败\n");
        return NULL;
    }
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(capacity * sizeof(int));
    return stack;
}

// 判断栈是否为空
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// 判断栈是否已满
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// 入栈
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full\n");
        return;
    }
    stack->top++;
    stack->array[stack->top] = item;
    printf("Pushed: %d\n", item);
}

// 出栈
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    int item = stack->array[stack->top];
    stack->top--;
    return item;
}

// 获取栈顶元素
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->array[stack->top];
}

int main() {
    struct Stack* stack = createStack(5);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    printf("Peeked: %d\n", peek(stack));

    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));

    printf("Peeked: %d\n", peek(stack));

    return 0;
}
