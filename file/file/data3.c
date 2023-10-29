#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

// ���нṹ
struct Queue {
    int front;
    int rear;
    int capacity;
    int* array;
};

// ����һ������
struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL) {
        printf("����ʧ��ʧ��\n");
        return;
    }
    queue->front = 0;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->array = (int*)malloc(capacity * sizeof(int));
    return queue;
}

// �ж϶����Ƿ�Ϊ��
int isEmpty(struct Queue* queue) {
    return queue->rear == -1;
}

// �ж϶����Ƿ�����
int isFull(struct Queue* queue) {
    return queue->rear == queue->capacity - 1;
}

// ���
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("��������\n");
        return;
    }
    queue->rear++;
    queue->array[queue->rear] = item;
    printf("��ӳɹ�: %d\n", item);
}

// ����
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("�ӿ�,ʧ��\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front++;
    return item;
}

// ��ȡ����Ԫ��
int front(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("�ӿ�,ʧ��\n");
        return -1;
    }
    return queue->array[queue->front];
}

// ��ȡ��βԪ��
int rear(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("�ӿ�,ʧ��\n");
        return -1;
    }
    return queue->array[queue->rear];
}

//����
void traverse(struct Queue* queue) {
    for (int i = 0; i < queue->capacity; i++)
        printf("%d ", queue->array[i]);
    printf("\n");
}

int main() {
    struct Queue* queue = createQueue(5);

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printf("��Ԫ�� %d\n", front(queue));
    printf("βԪ�� %d\n", rear(queue));

    printf("���� %d\n", dequeue(queue));

    printf("��Ԫ�� %d\n", front(queue));
    printf("βԪ�� %d\n", rear(queue));

    return 0;
}
