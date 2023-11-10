#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#define MAX 100
#include <stdlib.h>
#include <stdio.h>
////List realised by array
//
//typedef struct LNode{
//	int arr[MAX];
//	int Last;
//}*List;
////��ʼ��
//List MakeEmpty() {
//	List L;
//
//	L = (List)malloc(sizeof(struct LNode));
//	L->Last = -1;
//
//	return L;
//}
//
////����
//#define ERROR -1
//
//int Find(List L, int x) {
//	int i = 0;
//	while (i <= L->Last && L->arr[i] != x)
//		i++;
//	if (i > L->Last) return ERROR;
//	else return i;
//}
//
////����
//int Insert(List L, int x, int pos) {
//	int i;
//	if (L->Last == MAX - 1) {
//		//����
//		printf("����\n");
//		return 1;
//	}
//	if (pos < 0 || pos > L->Last + 1) {
//		printf("λ�÷Ƿ�\n");
//		return 1;
//	}
//	for (i = L->Last ; i >= pos; i--)
//		L->arr[i + 1] = L->arr[i];
//	L->arr[pos] = x;
//	L->Last++;
//	return 0;
//}
//
////ɾ��
//int Delete(List L, int pos) {
//	int i;
//	if (pos < 0 || pos > L->Last) {
//		printf("λ��%d������\n", pos);
//		return 1;
//	}
//	for (i = pos; i < L->Last; i++)
//		L->arr[pos] = L->arr[pos + 1];
//	L->Last--;
//	return 0;
//}
//
//int main() {
//	List L = MakeEmpty();
//	Insert(L, 1, 0);
//	Insert(L, 2, 1);
//	Insert(L, 3, 2);
//	Insert(L, 4, 2);
//	int pos, i = 1;
//	while (Find(L, i) != ERROR) {
//		pos = Find(L, i);
//		printf("%d\n", pos);
//		i++;
//	}
//	return 0;
//}

////����ʵ��
//
//typedef struct LNode {
//	int data;
//	struct LNode* next;
//}*List;
//
////����
//#define ERROR 
//List Find(List L, int x) {
//	List cur = L;
//	while (cur && cur->data != x)
//		cur = cur->next;
//	if (cur)
//		return cur;
//	else
//		return ERROR;
//}
//
////����
//int Insert(List L, int x, List pos) {
//	List tmp, pre;
//	for (pre = L; pre && pre->next != pos; pre = pre->next) {
//		if (pre == NULL) {
//			printf("����\n");
//			return 1;
//		}
//		else {
//			tmp = (List)malloc(sizeof(struct LNode));
//			if (!tmp) {
//				printf("����һ��û�д�\n");
//				return 1;
//			}
//			tmp->data = x;
//			tmp->next = pos;
//			pre->next = tmp;
//			return 0;
//		}
//	}
//}
//
////ɾ��
//int Delete(List L, List pos) {
//	List pre;
//	for (pre = L; pre && pre->next != pos; pre = pre->next) {
//		if (pre == NULL || pos == NULL) {
//			printf("λ�ô���\n");
//			return 1;
//		}
//		else {
//			pre->next = pos->next;
//			free(pos);
//			return 0;
//		}
//	}
//}
//
//int main() {
//	return 0;
//}


//��ջ
//˳��
//typedef struct SNode {
//	int* data;
//	int top;
//	int Maxsize;
//}*Stack;
//
//Stack CreateStack(int Maxsize) {
//	Stack S = (Stack)malloc(sizeof(struct SNode));
//	S->data = (int*)malloc(Maxsize * sizeof(int));
//	S->top = -1;
//	S->Maxsize = Maxsize;
//  return S;
//}
//
//int IsFull(Stack S) {
//	return (S->top == S->Maxsize);
//}
//
//int Push(Stack S, int x) {
//	if (IsFull(S)) {
//		printf("������\n");
//		return 0;
//	}
//	else {
//		S->data[++(S->top)] = x;
//		return 1;
//	}
//}
//
//int IsEmpty(Stack S) {
//	return (S->top == -1);
//}
//
//int Pop(Stack S) {
//	if (IsEmpty(S)) {
//		printf("��ջ��\n");
//		return 0;
//	}
//	else {
//		return S->data[(S->top)--];
//	}
//}
//
//int main() {
//	Stack S = CreateStack(10);
//	for (int i = 0; i < 10; i++) {
//		Push(S, i);
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", Pop(S));
//	}
//	return 0;
//}

////����洢
//typedef struct SNode {
//	int data;
//	struct SNode* next;
//}* Stack;
//
//Stack CreateStack() {
//	Stack S;
//
//	S = (Stack)malloc(sizeof(struct SNode));
//	S->next = NULL;
//	return S;
//}
//
//int IsEmpty(Stack S) {
//	return (S->next == NULL);
//}
//
//int Push(Stack S, int x) {
//	Stack tmp;
//	tmp = (Stack)malloc(sizeof(struct SNode));
//	tmp->data = x;
//	tmp->next = S->next;
//	S->next = tmp;
//	return 1;
//}
//
//int Pop(Stack S) {
//	Stack tmp;
//	int top;
//	if (IsEmpty) {
//		printf("�ѿ�\n");
//		return 0;
//	}
//
//	else {
//		tmp = S->next;
//		top = tmp->data;
//		S->next = tmp->next;
//		free(tmp);
//		return top;
//	}
//}
//
//int main() {
//	return 0;
//}

//����
//����
//
//typedef struct QNode {
//	int* data;
//	int Front, Rear;
//	int MaxSize;
//}* Queue;
//
//Queue CreateQueue(int MaxSize) {
//	Queue Q = (Queue)malloc(sizeof(struct QNode));
//	Q->data = (int*)malloc(MaxSize * sizeof(int));
//	Q->Front = Q->Rear = 0;
//	Q->MaxSize = MaxSize;
//	return Q;
//}
//
//int IsFull(Queue Q) {
//	return (Q->Rear + 1) % Q->MaxSize == Q->Front;
//}
//
//int AddQ(Queue Q, int x) {
//	if (IsFull(Q)) {
//		printf("������\n");
//		return 0;
//	}
//
//	else {
//		Q->Rear = (Q->Rear + 1) % Q->MaxSize;
//		Q->data[Q->Rear] = x;
//		return 1;
//	}
//}
//
//int IsEmpty(Queue Q) {
//	return (Q->Front == Q->Rear);
//}
//
//int DeleteQ(Queue Q) {
//	if (IsEmpty(Q)) {
//		printf("���п�\n");
//		return 0;
//	}
//
//	else {
//		Q->Front = (Q->Front + 1) % Q->MaxSize;
//		return Q->data[Q->Front];
//	}
//}
//
//int main() {
//	Queue Q = CreateQueue(10);
//	for (int i = 0; i < 9; i++) {
//		AddQ(Q, i);
//	}
//	for (int i = 0; i < 9; i++) {
//		printf("%d ",DeleteQ(Q));
//	}
//	return 0;
//}

//typedef struct Node {
//	int Data;
//	struct Node* Next;
//}* PtrToNode;
//
//typedef struct QNode {
//	PtrToNode Front, Rear;
//	int Maxsize;
//}* Queue;
//
//int IsEmpty(Queue Q) {
//	return (Q->Front == NULL);
//}
//
//int Delete(Queue Q) {
//	PtrToNode FrontCell;
//	int FrontElem;
//
//	if (IsEmpty(Q)) {
//		printf("Queue is empty\n");
//		return 0;
//	}
//
//	else {
//		FrontCell = Q->Front;
//		if (Q->Front == Q->Rear)
//			Q->Front = Q->Rear = NULL;
//		else
//			Q->Front = Q->Front->Next;
//		FrontElem = FrontCell->Data;
//		free(FrontCell);
//		return FrontElem;
//	}
//}

//typedef struct TNode {
//	int Data;
//	struct TNode Left, Right;
//}* BinTree;

//int main() {
//	printf("2\n");
//	return 0;
//}

//int main() {
//    int a;
//    scanf("%d", &a);
//    double* arr = (double*)malloc(sizeof(double)*a);
//    char ch;
//    for (int i = 0; i < a; i++) {
//        getchar();
//        scanf("%c %lf", &ch, &arr[i]);
//        if (ch == 'M') arr[i] /= 1.09;
//        else  arr[i] *= 1.09;
//    }
//    for (int i = 0; i < a; i++) {
//        printf("%.2f\n", arr[i]);
//    }
//    free(arr);
//    return 0;
//}
