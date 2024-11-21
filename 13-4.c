//#define _CRT_SECURE_NO_WARNINGS  // 이 줄을 추가하면 _s 관련 경고가 나타나지 않습니다.
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
//	printf("일반 지역 변수 (auto)를 사용한 함수..\n");
//	for (i = 0; i < 3; i++) {
//
//		auto_func();
//
//	}
//
//
//	printf("정적지역변수 \n");
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
//	static int a;// 한번만 a를 호출하고 다음부턴 안함    메모리안에 값이 1로 저장 2번쨰 2 3 번쨰 3
//
//	a++;
//
//	printf("%d\n", a);
//
//}