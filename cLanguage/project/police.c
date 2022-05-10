#include <stdio.h>

int main() {

	// 변수 예제
	// 
	// 1 정수형 변수 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	// printf("1\n")

	// 2 실수형 변수 예제
	/*float f = 46.5;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 상수예제
	/*const int YEAR = 2000; // 상수
	printf("태어난 년도는 %d\n", YEAR);*/

	// printf 예제
	// 연산
	/*
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d \n", 3, 7, 3 * 7); // 변수를 사용하지 않고 바로 사용도 가능하다*/

	// scanf 예제
	/*int input;
	printf("값을 입력 하세요:");
	scanf_s("%d", &input);
	printf("입력값은 : %d\n", input);*/

	/*
	int one, two, three;
	printf("세개의 값을 입력해 주세요");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값은 : %d\n", one);
	printf("두번째 값은 : %d\n", two);
	printf("세번째 값은 : %d\n", three);
	*/

	// 문자(한글자), 문자열(한글자 이상의 여러글자)
	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	// 문자열
	/*
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);
	*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 무엇입니까?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살입니까?");
	scanf_s("%d", &age);

	int weight;
	printf("몸무게가 몇 키로 입니까?");
	scanf_s("%d", &weight);

	int height;
	printf("키가 몇 cm입니까?");
	scanf_s("%d", &height);

	char what[256];
	printf("범죄 명이 무엇입니까?");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n---- 범죄자 정보 ----\n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %d\n", weight);
	printf("키 : %d\n", height);
	printf("범죄명 : %s\n", what);
	return 0;
}