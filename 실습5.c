//int main() {
//	int n; // �Է¹��� ����
//
//	while (1) { // ���� �ݺ�
//		printf("���ڸ� �Է��ϼ��� (0 �Է� �� ����): ");
//		scanf_s("%d", &n);
//
//		if (n == 0) { // ���� ����
//			printf("���α׷��� �����մϴ�.\n");
//			break;
//		}
//
//		if (n <= 0) { // ������ �߸��� �Է� ó��
//			printf("�߸��� �Է��Դϴ�. ����� �Է����ּ���.\n");
//			continue;
//		}
//
//		printf("%d�� ���:\n", n);
//		for (int i = 1; i <= 9; i++) { // ������ ���
//			printf("%d * %d = %d\n", n, i, n * i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//
//
//	void fizzbuzz(int  a) {  //�Լ��̿� 
//
//		if (a % 3 == 0 && a % 5 == 0) {  //�����ؼ� ��������� ó��
//
//			printf("fizzbuzz\n");
//
//
//		}
//		else if (a % 3 == 0)
//		{
//			printf("fizz\n");
//		}
//		else if (a % 5 == 0)
//		{
//			printf("buzz\n");
//		}
//
//		else {    //�ش���� �׳����
//			printf("%d\n", a);
//		}
//	}
//
//	int main(void) {
//		int n;
//
//		printf("��: ");
//
//
//		scanf_s("%d", &n);
//
//		for (int i = 1; i <= n; i++) {                                                                                 
//
//
//			fizzbuzz(i);
//		}
//
//		return 0;
//	}