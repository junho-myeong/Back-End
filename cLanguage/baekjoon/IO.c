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

  // 10869번
	int x;
	int y;

	scanf_s("%d%d", &x, &y);
	printf("%d\n", x + y);
	printf("%d\n", x - y);
	printf("%d\n", x * y);
	printf("%d\n", x / y);
	printf("%d\n", x % y);

  // 10926번
	char str[50];

	scanf_s("%s", str, sizeof(str));
	printf("%s??!\n", str);

  // 10998번
	int year;
	const int YEAR1 = 543;
	scanf("%d", &year);
	printf("%d", year - YEAR1);

  // 10430번
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n",(a+b)%c);
	printf("%d\n",((a%c) + (b%c))%c);
	printf("%d\n",(a*b)%c);
	printf("%d\n", ((a % c) * (b % c)) % c);

  // 2588번
	int a, b;
	
	scanf_s("%d\n%d", &a, &b);

	printf("%d\n", a * (b%10));
	printf("%d\n", a * ((b%100)/10));
	printf("%d\n", a * (b/100));
	printf("%d\n", a * b);
}