#include <stdio.h>
#include <stdint.h> // 시대가 지남에 따라 컴퓨터 비트가 향상 되는것에 맞춰 생성된것이다

int main_stdint()
{
	int8_t num1 = -128; // 여기서 8 은 비트크기를 내가 지정할수 잇는것이다
	int16_t num2 = -128; // 여기서 8 은 비트크기를 내가 지정할수 잇는것이다
	int32_t num3 = -128; // 여기서 8 은 비트크기를 내가 지정할수 잇는것이다
	int64_t num5 = 111;
	printf("%d %lld", num1, num5); // 4 바이트 이하에 후는 d, 즉 데시멀로 서식지정자 사용, 8 바이트는 lld 즉 롱롱 디로 사용한다

	uint16_t num4 = 65535; // unsigned도 비트크기를 지정할수 잇다
}