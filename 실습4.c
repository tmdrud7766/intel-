//#include<stdio.h>
//
//int main(void) {
//
//	int a = 10;
//	double b = 3.4;
//
//	printf("int ���� ���� ũ�� :%d\n", sizeof(a));
//	printf("double ���� ���� ũ�� :%d\n", sizeof(b));
//	printf("�������� ���� ũ�� :%d\n", sizeof(10));
//	printf("������ ���� ũ�� :%d\n", sizeof(1.5 + 3.4));
//	printf("�ڷ����� ���� ũ�� :%d\n", sizeof(char));
//
//	return 0;
//}



#include<stdio.h>
//
//
//int main() {
//
//	int a = 10;
//
//	if (a >= 0) {
//
//		a = 1;
//
//	}
//	else
//	{
//		a = -1;
//
//	}
//
//	printf("a :%d\n", a);
//
//	return 0;
//}
//


//int main() {
//
//	int a = 0, b = 0;
//
//
//
//	if(a > 0) {
//
//		b=1;
//	}
//
//	else if (a == 0) {
//		b = 2;
//
//	}
//	else
//
//	{
//		b = 3;
//	}
//	printf("b: %d\n", b);
//
//}

//int main() {
//
//	int a = 10, b = 20;
//
//	if (a < 0) {
//
//		if (b < 0) {
//			printf("ok");
//
//		}
//
//	}
//	else
//	{
//		printf("ok");
//	}
//	return 0;
//}


//int main() {
//
//	int rank = 2, m = 0;
//	switch ( rank)
//	{
//
//	case 1:
//		m = 300;
//		break;
//	case 2:
//		m = 200;
//0		break;
//	case3:
//		m = 100;
//		break;
//
//	default:
//		m = 10;
//		break;
//	}
//

//int main(){
//	int n;
//
//	printf("�����Է� :");
//	scanf("%d", &n);
//	switch (n%3)
//	{
//
//	case 0:
//		printf("����");
//		break;
//
//	default:
//		printf("��");
//		break;
//	}
//
//	return 0;
//
//
//
//
//}

//int main() {
//
//	int i = 1;
//
//	int n;
//	scanf_s("%d", &n);
//
//
//	if ( n<=0) {
//		printf("�߸��� �Է��Դϴ�.\n");
//		return 1;
//	}
//
//	while (i <= 9) {
//
//
//
//		printf("n*%d  =%d\n", i, n*i);
//
//		i = i + 1;
//	}
//
//
//
//	return 0;
//
//}

//int sum(int x, int y);
//
//
//int main(void) {
//
//	int a = 10, b = 20;
//	int result;
//
//
//	result = sum(a, b);
//	printf("result : %d\n", result);
//
//	return 0;
//}
//
//int sum(int x, int y) {
//
//	int temp;
//
//	temp = x + y;
//
//
//	return temp;
//}

//int get_num(void);
//
//
//int main(void)
//
//{
//	int result;
//
//	result = get_num();
//	printf("��ȯ��: %d\n", result);
//	return 0;
//
//}
//
//int get_num(void) {
//
//	int num;
//
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	return num;
//}

//void print_char(char ch, int count);
//
//int main(void)
//{
//
//
//	print_char('@', 5);
//
//	return 0;
//
//
//}
//
//void print_char(char ch, int count) 
//
//{
//
//	int i;
//
//	for (i = 0; i < count; i++)
//	{
//
//		printf("%c", ch);
//	}
//	return;
//}

//
//void print_line(void);
//
//
//int main(void)
//{
//	print_line();
//	printf("�й�    �̸�    ����        ����\n");
//	print_line();
//
//
//	return 0;
//
//
//}
//
//
//void print_line(void)
//{
//
//
//	int i;
//
//	for (i = 0; i < 50; i++) {
//		printf("-");
//
//	}
//
//	printf("\n");
//}
//

//void fruit(int count);
//
//int main(void)
//
//{
//	fruit(1);
//
//
//	return 0;
//}
//
//void fruit(int count) 
//{
//	printf("apple\n");
//	if (count == 3)return;
//
//	fruit(count+1);
//	printf("jam\n");
//
//}

//
//int main(void)
//{
//	char str[80] = "applejam";
//
//	printf("���ʹ��ڿ� : %s\n", str);
//	printf("���ڿ� �Է�: ");
//	scanf_s("%s", str);
//	printf("�Է� �� ���ڿ� : %s\n", str);
//
//	return 0;
//
//
//
//}



//void swap(int *pa, int *pb);
//
//int main(void) 
//{
//
//	int a = 10,b= 20;
//
//
//	swap(&a, &b);
//	printf("a:%d,b:%d\n", a, b);
//
//	
//
//	return 0;
//
//
//}
//
//void swap(int *pa, int *pb)
//{
//
//	int temp;
//
//
//	temp = *pa;
//
//	*pa = *pb;
//
//	*pb = temp;
//
//
//}
//
//void fizzbuzz(int  a) {  //�Լ��̿� 
//
//	if (a % 3 == 0 && a % 5 == 0) {  //�����ؼ� ��������� ó��
//
//		printf("fizzbuzz\n");
//
//
//	}
//	else if (a % 3 == 0) 
//	{
//		printf("fizz\n");
//	}
//	else if (a % 5 == 0)
//	{
//		printf("buzz\n");
//	}
//
//	else {    //�ش���� �׳����
//		printf("%d\n", a);
//	}
//}
//
//int main(void) {
//	int n;
//
//	printf("��: ");
//
//
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//
//
//		fizzbuzz(i);  
//	}
//
//	return 0;
//}

//int main() {
//
//	int i = 1;
//
//	int n;
//	scanf_s("%d", &n);
//
//
//	if (n <= 0) {
//		printf("�߸��� �Է��Դϴ�.\n");
//		return 1;
//	}
//
//	while (i <= 9) {
//
//
//
//		printf("n*%d  =%d\n", i, n*i);
//
//		i = i + 1;
//	}
//
//
//
//	return 0;
//
//}


//void swap(int *pa, int *pb);
//
//int main(void) 
//{
//
//	int a = 10,b= 20;
//
//
//	swap(&a, &b);
//	printf("a:%d,b:%d\n", a, b);
//
//	
//
//	return 0;
//
//
//}
//
//void swap(int *pa, int *pb) //������ a,b ���� �ּҰ� ����Ű�� �� 10 20
//{
//
//	int temp;
//
//
//	temp = *pa;
//
//	*pa = *pb;
//
//	*pb = temp;
//
//
//}

//void swap(void);
//
//int main(void)
//{
//
//	int a = 10, b = 20;
//
//	swap();
//	printf("a:%d,  b:%d\n", a, b);
//
//	return 0;
//
//
//}
//
//void swap(void) {
//
//
//	int temp;
//
//
//	temp = a;     // ���� main������ ���� �Ǳ� ������ �޸𸮿��� �����ü� ����
//
//	a = b;        
//
//	b = temp;
//
//}



//void swap(void);
//
//int main(void)
//{
//
//	int a = 10, b = 20;
//
//	swap(a,b);
//	printf("a:%d,  b:%d\n", a, b);
//
//	return 0;
//
//
//}
//
//void swap(int x, int y) {
//
//
//	int temp;
//
//
//	temp = x;     // ���� main������ ���� �Ǳ� ������ �޸𸮿��� �����ü� ����
//
//	x = y;        
//
//	y = temp;
//
//}
