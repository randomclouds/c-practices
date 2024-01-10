#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

//int cmp(void*, void*);
//void Print(contigent*, int);
//void My_sort(contigent*, int);


//typedef struct {
//	char name[20];
//	short win;
//	short goals;
//}contigent;
//

//int cmp(const void* a1, const void* b1) {
//	contigent a = *(contigent*)a1;
//	contigent b = *(contigent*)b1;
//	if (0 == a.win - b.win) {
//		return a.goals - b.goals;
//	}
//	else return a.win - b.win;
//}
//
//void Print(contigent* C, int num) {
//	for (int i = 0; i < num; i++) {
//		printf("%s %d %d\n", C[i].name, C[i].win, C[i].goals);
//	}
//}
//
//void Insertsort(contigent* C, int num) {
//	for (int i = 1; i < num; i++) {
//		contigent tmp = C[i];
//		int j;
//		for (j = i; j > 0; j--) {
//			if (cmp(&tmp, &C[j - 1]) > 0) {
//				C[j] = C[j - 1];
//			}
//			else break;
//		}
//		C[j] = tmp;
//	}
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	contigent C[10] = { 0 };
//	for (int i = 0; i < N; i++) {
//		scanf("%s", C[i].name);
//	}
//
//	int score;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &score);
//			switch (score) {
//			case 0:
//			case -3:
//			case -4:
//				break;
//			case -5:
//				C[i].goals += 1;
//				break;
//			case 5:
//				C[i].goals += 2;
//				C[i].win += 1;
//				break;
//			default:
//				C[i].goals += 3;
//				C[i].win += 1;
//			}
//		}
//	}
//	Insertsort(C, N);
//	Print(C, N);
//	return 0;
//}
//

//struct Employee {
//    char name[10];
//    float basic_salary;
//    float bonus;
//    float expense;
//    float net_salary;
//};
//
//int main() {
//    int n;
//    scanf("%d", &n); // 读取职员数量
//
//    struct Employee* employees = (struct Employee*)malloc(sizeof(struct Employee)*n); // 创建结构体数组来存储职员信息
//
//    // 逐行读取职员信息并存储到结构体数组中
//    for (int i = 0; i < n; i++) {
//        scanf("%s %f %f %f", employees[i].name, &employees[i].basic_salary, &employees[i].bonus, &employees[i].expense);
//        employees[i].net_salary = employees[i].basic_salary + employees[i].bonus - employees[i].expense; // 计算实发工资
//    }
//
//    // 输出每位职员的姓名和实发工资
//    for (int i = 0; i < n; i++) {
//        printf("%s %.2f\n", employees[i].name, employees[i].net_salary);
//    }
//
//    free(employees);
//    return 0;
//}

////typedef struct {
//	char name[81];
//	double price;
//}Book;
//void find_max_min(Book bk[], int n, int* max_idx, int* min_idx);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	getchar();
//	Book bk[N];
//	int i;
//	for (i = 0; i < n; i++) {
//		gets(bk[i].name);
//		scanf("%lf", &bk[i].price);
//		getchar();
//	}
//	int max_idx = 0, min_idx = 0;
//	find_max_min(bk, n, &max_idx, &min_idx);
//	printf("%.2lf, %s\n", bk[max_idx].price, bk[max_idx].name);
//	printf("%.2lf, %s\n", bk[min_idx].price, bk[min_idx].name);
//	return 0;
//}
//
//void find_max_min(Book bk[], int n, int* max_idx, int* min_idx) {
//	double max = 0, min = 99999.0;
//	for (int i = 0; i < n; i++) {
//		if (bk[i].price > max) {
//			max = bk[i].price;
//			*max_idx = i;
//		}
//		if (bk[i].price < min) {
//			min = bk[i].price;
//			*min_idx = i;
//		}
//	}
//}