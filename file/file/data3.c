#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// 队列结构
struct Queue {
    int front;
    int rear;
    int capacity;
    int* array;
};

// 创建一个队列
struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL) {
        printf("插入失败\n");
        return;
    }
    queue->front = 0;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->array = (int*)malloc(capacity * sizeof(int));
    return queue;
}

// 判断队列是否为空
int isEmpty(struct Queue* queue) {
    return queue->rear == -1;
}

// 判断队列是否已满
int isFull(struct Queue* queue) {
    return queue->rear == queue->capacity - 1;
}

// 入队
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    queue->rear++;
    queue->array[queue->rear] = item;
    printf("Enqueued: %d\n", item);
}

// 出队
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front++;
    return item;
}

// 获取队首元素
int front(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->array[queue->front];
}

// 获取队尾元素
int rear(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue->array[queue->rear];
}

int main() {
    struct Queue* queue = createQueue(5);

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printf("Front: %d\n", front(queue));
    printf("Rear: %d\n", rear(queue));

    printf("Dequeued: %d\n", dequeue(queue));
    printf("Dequeued: %d\n", dequeue(queue));

    printf("Front: %d\n", front(queue));
    printf("Rear: %d\n", rear(queue));

    return 0;
}
