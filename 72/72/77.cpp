#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <iostream>
#include <string>
//using namespace std;
//typedef struct LNode* LinkList;
//typedef struct LNode {
//	int val;
//	int expon;
//	LinkList next;
//};
//
//
//
////�������ֻ�в���Ĺ���, �����ǲ���λ��
//void Insert(int v, int e, LinkList& rear) {
//	LinkList one = new LNode;
//	one->expon = e; one->val = v;
//	one->next = rear->next;
//	rear->next = one;
//	rear = one;
//}
//
//LinkList ReadLink() {
//	int num, v, e;
//	cin >> num;
//	LinkList p = new LNode, rear = p;
//	p->next = NULL;
//	for (int i = 0; i < num; i++) {
//		cin >> v >> e;
//		Insert(v, e, rear);
//	}
//	LinkList q = p; p = p->next; delete q; //ɾȥͷ���
//	return p;
//}
//
//LinkList Mulpy(LinkList LA, LinkList LB) {
//	LinkList p = new LNode, rear = p, t1 = LA, t2 = LB, q;
//	int v, e;
//
//	p->next = NULL;
//	while (t1) {  //����t2��һ��
//		Insert(t2->val * t1->val, t2->expon + t1->expon, rear);
//		t1 = t1->next;
//	}
//	t2 = t2->next;
//	while (t2) {
//		t1 = LA; rear = p;
//		while (t1) {
//			LinkList one = new LNode;
//			v = t2->val * t1->val; 
//			e = t2->expon + t1->expon;
//			while (rear->next && e < rear->next->expon)
//				rear = rear->next;
//			if (rear->next && e == rear->next->expon) {//�����ǱȽ���Ҫ��, ע��Ҫ�ж�rear��һ���ڵ��Ƿ��ǿյ�
//				rear->next->val += v;
//				if (!rear->next->val) {
//					q = rear->next;
//					rear->next = rear->next->next;
//					delete q;
//				}
//			}
//			else Insert(v, e, rear);
//			t1 = t1->next;
//		}
//		t2 = t2->next;
//	}
//	q = p; p = p->next; delete q;
//	return p;
//}
//
//void Print(LinkList p) {
//	if (!p) {
//		cout << "0 0" << endl;
//		return;
//	}
//	int flag = 0;
//	while (p) {
//		if (!flag) flag = 1;
//		else cout << " ";
//		cout << p->val << " " << p->expon;
//		p = p->next;
//	}
//	cout << endl;
//}
//
//int main() {
//	//��������
//	LinkList LA, LB, LC;
//	LA = ReadLink();
//	LB = ReadLink();
//	//�˷�ʵ��
//	Print(LA);
//	Print(LB);
//	LC = Mulpy(LA, LB);
//	Print(LC);
//	return 0;
//}





//int main() {
//    char op = 0;
//    int o[2] = { 0 };
//    int j = 0;
//    std::string input;
//    std::getline(std::cin, input);
//
//    for (char a : input) {
//        if (a != ' ') {
//            if (a < '0') {
//                j--;
//                op = a;
//            }
//            else o[j] = o[j] * 10 + a - '0';
//        }
//        else j++;
//    }
//
//    switch (op) {
//    case '+':
//        std::cout << o[0] + o[1] << std::endl;
//        break;
//    case '-':
//        std::cout << o[0] - o[1] << std::endl;
//        break;
//    case '*':
//        std::cout << o[0] * o[1] << std::endl;
//        break;
//    case '/':
//        std::cout << o[0] / o[1] << std::endl;
//        break;
//    case '%':
//        std::cout << o[0] % o[1] << std::endl;
//        break;
//    }
//    return 0;
//}

//int main() {
//	int row, col;
//	scanf("%d %d", &row, &col);
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	for (int i = 0; i < row; i++) {
//		*(arr + i) = (int*)malloc(sizeof(int) * col);
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		int flag = 1;
//		for (int j = 0; j < col; j++) {
//			if (flag) {
//				printf("%d", arr[i][j]);
//				flag = 0;
//			}
//
//			else printf("-%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < row; i++) {
//		free(*(arr + i));
//		*(arr + i) = NULL;
//	}
//	free(arr);
//	arr = NULL;
//
//	return 0;
//}

	// prim �㷨����С������ 

