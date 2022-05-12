#include <stdio.h>

int main_variable()
{
	int num1, num2, num3;
	num1 = 10; // 변수에 값을 할당 한다는 뜻이다. 즉 등호를 사용하여 값을 할당한다.
	num2 = 20;
	num3 = 30;

	int num4 = 40; // 변수를 선언하면서 변수에 값 할당을 같이하는 부분이다.
	int num5 = 50, num6 = 60; // 이런식으로도 할당이 가능하다

	printf("%d %d %d\n", num1, num2, num3); // d는 십진수를 뜻하는 decimal이라는 뜻이다
	
	return 0;
}