#include <stdio.h> // #include�� ��� ������ �����ϴ� ����, stdio.h�� printf �Լ��� ����� �� �ʿ��� ��� �����̴�.

int main_start() // c ��� ���α׷����� ���� ó�� ����Ǵ� �Լ�
{
	printf("hello, world!\n"); // ��ȣ�� ���� �ܾ �Լ���� �Ѵ�, ;�� �Լ��� ȣ���Ѵٴ� ���̴�.
	printf("%s\n", "Hello World"); // ���� �����ڶ�� �θ���
	printf("%s, %s\n", "Hello World,", "junho"); // ���� �����ڶ�� �θ���
	return 0; // �Լ� �ٱ����� ���� �����ϴ� ��ȯ�� �κ�
}