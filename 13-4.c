//#define _CRT_SECURE_NO_WARNINGS  // �� ���� �߰��ϸ� _s ���� ��� ��Ÿ���� �ʽ��ϴ�.
//#include <stdio.h>
//
//
//
//void auto_func(void);
//void static_func(void);
//
//
//int main(void) {
//
//
//	int i;
//
//
//	printf("�Ϲ� ���� ���� (auto)�� ����� �Լ�..\n");
//	for (i = 0; i < 3; i++) {
//
//		auto_func();
//
//	}
//
//
//	printf("������������ \n");
//	for (i = 0; i < 3; i++) {
//
//		static_func();
//
//	}
//
//
//	return 0;
//}
//
//
//void auto_func(void) {
//
//	int a = 0;
//
//	a++;
//
//
//	printf("%d\n", a);
//
//
//
//}
//
//void static_func(void) {
//
//
//	static int a;// �ѹ��� a�� ȣ���ϰ� �������� ����    �޸𸮾ȿ� ���� 1�� ���� 2���� 2 3 ���� 3
//
//	a++;
//
//	printf("%d\n", a);
//
//}