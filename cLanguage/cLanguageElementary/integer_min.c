#include <stdio.h>
#include <limits.h> // ������ �ִ� �ּҰ� �� �Ҵ� �Ҷ��� ������ ������ �߻��Ѵ�. �׷��� limits.h��� ��������� �ʿ��ϴ�
int main_integer_min()
{
	// int num1 = -2147483648; // ������ �ּҰ��� ǥ���ϴ°�

	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	long long num3 = LLONG_MIN;

	num3 = LLONG_MAX + 1; // ���⼭�� �����÷ο찡 �߻��Ѵ�

	printf("%d %d %lld", num1, num2, num3);

	return 0;
}