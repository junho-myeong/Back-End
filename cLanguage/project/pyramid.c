#include <stdio.h>

// 반복문 for, while, do while
int main() {
	
	// 반복문 예시
	/* 
	for (int i = 0; i < 10; i++) {
	  printf("hello world\n");
	}
	*/


	// ++연산자
	/*
	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	*/

	// ++a 와 a++의 차이점 
	/*
	int b = 20;
	printf("b는 %d\n", b);
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);
	*/

	

	// 반복문 
	// for, while, do while
	/*
	for (선언; 조건; 증감) {
	  코드작성
	}
	*/
	/*
	for (int i = 1; i <= 10; i++) {
		printf("a는 %d\n", i);
	}
	*/

	// while문
	// while(조건) {}
	/*
	int i = 1; // 선언 부분
	while (i <= 10) { // 조건 부분
		printf("hellow world %d\n", i++); // 증감 부분
	}
	*/

	// do while
	// do{} while(조건)
	// 이건 조건을 만나기 전에 일단 시행하라는 뜻이다
	/*
	int i = 1;
	do {
		printf("hellow world %d\n", i++);
	} while (i < 0);
	*/

	// 이중 반복문
	/*
	for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("           두번째 반복문 : %d\n", j);
		}
	}
	*/

	// 구구단 만들기
	/*
	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	*/

	/*
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/


	
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	// 피라미드 쌓기 - 프로젝트
	int floor;
	printf("몇 층으로 쌓으시겠습니까?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < (i*2) + 1; k++) {
			printf("*");
		}
		printf("\n");
	}






	return 0;
}