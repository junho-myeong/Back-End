#include <stdio.h>

int main() {
	// 2557번
	printf("Hello World!");

	// 10718번
	printf("강한친구 대한육군\n");
	printf("강한친구 대한육군");

  // 10171번 문제
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");

  // 1000번
	int x;
	int y;

	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", x + y);


  // 1001번
	int x;
	int y;

	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", x - y);

  // 10998번
	double x;
	double y;

	scanf_s("%lf%lf", &x, &y);
	printf("%.13lf", x / y);

  // 10998번
	int x;
	int y;

	scanf_s("%d%d", &x, &y);
	printf("%d\n", x + y);
	printf("%d\n", x - y);
	printf("%d\n", x * y);
	printf("%d\n", x / y);
	printf("%d\n", x % y);

  // 10998번
	char str[50];

	scanf_s("%s", str, sizeof(str));
	printf("%s??!\n", str);
}