#include <stdio.h>

int main() {
	// 2588번
	int a, b, c;
	
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf_s("%d%d", &b, &c);
		printf("%d\n", b + c);
	}

  // 8393번
	int a;
	int sum = 0;
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);

  // 15552번
	int a, b, c;

	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf_s("%d%d", &b, &c);
		printf("%d\n", b + c);
	}

  // 2741번
	int a;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++) {
		printf("%d\n",i);
	}

  // 2742번
	int a;

	scanf_s("%d", &a);

	for (int i = a; i >=1 ; i--) {
		printf("%d\n",i);
	}

  // 11021번
	int a, b, c;

	scanf_s("%d", &a);

	for (int i = 0; i <a ; i++) {
		scanf_s("%d%d", &b, &c);
		printf("Case #%d: %d\n",i+1, b+c);
	}

  // 11022번
	int a, b, c;

	scanf_s("%d", &a);

	for (int i = 0; i <a ; i++) {
		scanf_s("%d%d", &b, &c);
		printf("Case #%d: %d + %d = %d\n",i+1,b, c, b+c);
	}

  // 2438번

  // 10871
	int N;
	int X;
	int c;

	int arr[10000];
	scanf_s("%d%d", &N, &X);


	for (int i = 0; i < N ; i++) {
		scanf_s("%d", &c);
		arr[i] = c;
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] < X) {
			printf("%d ", arr[i]);
		}
	}

  // 10952번
	int a, b;


	do {
		scanf("%d%d", &a, &b);
		if (a != 0 && b != 0) {
		printf("%d\n", a + b);
		}
	} while (a != 0 && b != 0);

  // 10951번
	int a, b;

	// scanf_s 는 읽어들인 값을 갯수를 리턴한다!
	while (scanf_s("%d %d", &a, &b) != -1) {
		printf("%d\n", a + b);
	}

  // 1110번
	int a;
	int b;
	int cnt = 1;

	scanf_s("%d", &a);
	b = a;
	
	while (1) {
		a = (((a % 10) * 10) + (((a / 10) + (a % 10))%10));
		if (b == a) {
			break;
		}
		cnt++;
		
	}

	printf("%d", cnt);


}