#include <stdio.h>

int main_variable()
{
	int num1, num2, num3;
	num1 = 10; // ������ ���� �Ҵ� �Ѵٴ� ���̴�. �� ��ȣ�� ����Ͽ� ���� �Ҵ��Ѵ�.
	num2 = 20;
	num3 = 30;

	int num4 = 40; // ������ �����ϸ鼭 ������ �� �Ҵ��� �����ϴ� �κ��̴�.
	int num5 = 50, num6 = 60; // �̷������ε� �Ҵ��� �����ϴ�

	printf("%d %d %d\n", num1, num2, num3); // d�� �������� ���ϴ� decimal�̶�� ���̴�
	
	return 0;
}