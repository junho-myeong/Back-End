#include <stdio.h> // #include는 헤더 파일을 포함하는 문법, stdio.h는 printf 함수를 사용할 때 필요한 헤더 파일이다.

int main_start() // c 언어 프로그램에서 가장 처음 실행되는 함수
{
	printf("hello, world!\n"); // 괄호가 붙은 단어를 함수라고 한다, ;은 함수를 호출한다는 뜻이다.
	printf("%s\n", "Hello World"); // 서식 지정자라고 부른다
	printf("%s, %s\n", "Hello World,", "junho"); // 서식 지정자라고 부른다
	return 0; // 함수 바깥으로 값을 전달하는 반환값 부분
}