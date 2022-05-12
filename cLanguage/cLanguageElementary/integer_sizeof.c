#include <stdio.h>

int main_sizeof()
{
	int num1 = 0;
	int size;

	// size = sizeof num1; // 표현식
	// size = sizeof(num1); // 표현식
	// size = sizeof int; // 잘못된 방법
	size = sizeof(int);
	printf("%d", size);

	printf("char:%d short:%d int:%d long:%d longlong: %d",
		sizeof(char),
		sizeof(short),
		sizeof(int),
		sizeof(long),
		sizeof(long long));
}