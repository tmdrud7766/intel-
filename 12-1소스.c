
//int main(void)
//{
//	printf("apple�ּڰ�: %p\n", "apple");
//
//	printf("apple�ּڰ�: %p\n", "apple" + 1);
//	printf("apple�ּڰ�: %c\n", *"apple");
//	printf("apple�ּڰ�: %c\n", *"apple" + 1);
//	printf("apple�ּڰ�: %p\n", "apple"[2]);
//
//
//	return 0;
//}

//int main(void)
//{
//
//	char *dessert = "apple";
//
//	printf("�����Ľ�%s \n", dessert);
//	dessert = "banana";
//	printf("���� �Ľ�%s \n", dessert);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS  // �� ���� �߰��ϸ� _s ���� ��� ��Ÿ���� �ʽ��ϴ�.
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//
//	char *ps1 = "banana";
//	char *ps2 = "apple";
//
//	printf("���� ���ڿ�: %s\n", str1);
//
//	strcpy(str1, str2);  // strcpy_s() ��� strcpy() ���
//	printf("�ٲ� ���ڿ�: %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ�: %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ�: %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("�ٲ� ���ڿ�: %s\n", str1);
//
//	return 0;
//}