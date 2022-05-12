#include <stdio.h>
#include <limits.h> // 정수에 최대 최소값 을 할당 할때는 컴파일 오류가 발생한다. 그래서 limits.h라는 헤더파일이 필요하다
int main_integer_min()
{
	// int num1 = -2147483648; // 정수의 최소값을 표현하는것

	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	long long num3 = LLONG_MIN;

	num3 = LLONG_MAX + 1; // 여기서도 오프플로우가 발생한다

	printf("%d %d %lld", num1, num2, num3);

	return 0;
}