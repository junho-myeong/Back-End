#include <stdio.h>

int main_sizeof()
{
	int num1 = 0;
	int size;

	// size = sizeof num1; // ǥ����
	// size = sizeof(num1); // ǥ����
	// size = sizeof int; // �߸��� ���
	size = sizeof(int);
	printf("%d", size);

	printf("char:%d short:%d int:%d long:%d longlong: %d",
		sizeof(char),
		sizeof(short),
		sizeof(int),
		sizeof(long),
		sizeof(long long));
}