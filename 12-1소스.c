
//int main(void)
//{
//	printf("apple주솟값: %p\n", "apple");
//
//	printf("apple주솟값: %p\n", "apple" + 1);
//	printf("apple주솟값: %c\n", *"apple");
//	printf("apple주솟값: %c\n", *"apple" + 1);
//	printf("apple주솟값: %p\n", "apple"[2]);
//
//
//	return 0;
//}

//int main(void)
//{
//
//	char *dessert = "apple";
//
//	printf("오늘후식%s \n", dessert);
//	dessert = "banana";
//	printf("내일 후식%s \n", dessert);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS  // 이 줄을 추가하면 _s 관련 경고가 나타나지 않습니다.
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
//	printf("최초 문자열: %s\n", str1);
//
//	strcpy(str1, str2);  // strcpy_s() 대신 strcpy() 사용
//	printf("바뀐 문자열: %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("바뀐 문자열: %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("바뀐 문자열: %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("바뀐 문자열: %s\n", str1);
//
//	return 0;
//}