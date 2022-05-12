#include <stdio.h>
#include <float.h> // 실수자료형에 최대값과 최소값을 가진 헤더 파일이다

int main_real_number()
{
	float num1 = 1.6f;
	double num2 = 3867.215820;
	long double num3 = 9.327513l;

	// 지수 표기법으로 표시하기
	float num4 = 3.e5f;
	double num5 = -1.3827e-2;
	long double num6 = 5.21e+9l;

	printf("%f %f %lf\n", num1, num2, num3);
	printf("%e %e %le\n", num4, num5, num6);

	printf("%d %d %d",
		sizeof(num4),
		sizeof(num5),
		sizeof(num6));

	float num7 = FLT_MAX;
	float num8 = FLT_MIN;
	double num9 = DBL_MAX;
	double num10 = DBL_MIN;
	long double num11 = LDBL_MAX;
	long double num12 = LDBL_MIN;

	// 소수점 자리가 길경우에는 double에서 서식지정자를 사용할때 %f 대신 %e 를 사용해도된다


	// 실수형에 오버플로우와 언더 플로우
	// 실수형은 언더플로우가 발생하면 0 또는 쓰래기 값으로 처리한다.
	// 그리고 오버플로우가 발생하면 +inf(무한대라고한다) 라고 처리한다
	// 정수형과 다르게 순환 하는 형태가 아니고 +inf나 0 으로 바꿔버린다
}