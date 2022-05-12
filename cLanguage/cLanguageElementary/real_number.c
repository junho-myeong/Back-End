#include <stdio.h>
#include <float.h> // �Ǽ��ڷ����� �ִ밪�� �ּҰ��� ���� ��� �����̴�

int main_real_number()
{
	float num1 = 1.6f;
	double num2 = 3867.215820;
	long double num3 = 9.327513l;

	// ���� ǥ������� ǥ���ϱ�
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

	// �Ҽ��� �ڸ��� ���쿡�� double���� ���������ڸ� ����Ҷ� %f ��� %e �� ����ص��ȴ�


	// �Ǽ����� �����÷ο�� ��� �÷ο�
	// �Ǽ����� ����÷ο찡 �߻��ϸ� 0 �Ǵ� ������ ������ ó���Ѵ�.
	// �׸��� �����÷ο찡 �߻��ϸ� +inf(���Ѵ����Ѵ�) ��� ó���Ѵ�
	// �������� �ٸ��� ��ȯ �ϴ� ���°� �ƴϰ� +inf�� 0 ���� �ٲ������
}