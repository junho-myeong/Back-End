#include <stdio.h>

int main_char()
{
	// char�� ������ �ڷ����ε� ������ ������ �մ´� ����
	// ���ڿ��� �׿� �´� ������ �����Ǿ� �մ� (�ƽ�Ű �ڵ忡 ����) �׷��� ���� ��ü�� ����Ǵ°��� �ƴϰ�
	// ���ڿ� �ش��ϴ� ������ ����Ǵ°��̴�.
	char c1 = 'a'; // 97
	char c2 = 'b'; // 98
	char c3 = 0x61;
	printf("%c %d 0x%x\n", c1, c2, c3); // ���� �����ڸ� ����Ҷ��� c�Ǵ� d ������ϴµ� ���� �״�� ��� c, �ƽ�Ű�ڵ� ���� d�� ��Ÿ�����մ�
	// ���ڿ� 0 �� ���� 0 �� �ƿ� �ٸ����̴�!!


	// ���ڷ� �����ϱ�
	printf("%c %d\n", 'a' + 1, 'a' +1); // b 98
	printf("%c %d\n", 97 + 1, 97 +1); // b 98
	
	// ����� ����ϱ�
	char lineFeed = '\n'; // ���� ���ڸ� ������ ��Ƽ��� ����Ҽ� �մ�.
	printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);
	// �����
	// \n: ����, �����ǵ�
	// \r: ĳ���� ���� ���� ������ ������ġ�� ���ư�
	// \t: ���� ��

	// c��� ���ڴ� �ƽ�Ű �ڵ�� ����ȴ�!!!
	return 0;
}