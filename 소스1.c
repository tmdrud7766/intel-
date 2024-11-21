#include <stdio.h>


int main(void) {


	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값:  %d\n", a);      // 정수형 출력
	printf("변수 b의 값:  %d\n", b);      // 정수형 출력
	printf("변수 c의 값:  %d\n", c);      // 정수형 출력
	printf("변수 da의 값:  %.1f\n", da);  // 실수형 출력 (소수점 1자리)
	printf("변수 ch의 값:  %c\n", ch);    // 문자형 출력

	strcpy()

	return 0;
}