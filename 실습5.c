//int main() {
//	int n; // 입력받을 숫자
//
//	while (1) { // 무한 반복
//		printf("숫자를 입력하세요 (0 입력 시 종료): ");
//		scanf_s("%d", &n);
//
//		if (n == 0) { // 종료 조건
//			printf("프로그램을 종료합니다.\n");
//			break;
//		}
//
//		if (n <= 0) { // 음수나 잘못된 입력 처리
//			printf("잘못된 입력입니다. 양수만 입력해주세요.\n");
//			continue;
//		}
//
//		printf("%d단 출력:\n", n);
//		for (int i = 1; i <= 9; i++) { // 구구단 출력
//			printf("%d * %d = %d\n", n, i, n * i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//
//
//	void fizzbuzz(int  a) {  //함수이용 
//
//		if (a % 3 == 0 && a % 5 == 0) {  //먼저해서 공배수부터 처리
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
//		else {    //해당없음 그냥출력
//			printf("%d\n", a);
//		}
//	}
//
//	int main(void) {
//		int n;
//
//		printf("값: ");
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