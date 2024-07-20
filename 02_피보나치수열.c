#include <stdio.h>

// 사용자 입력
// 사용자가 원하는 n번째 피보나치 수열까지 출력

// 피보나치 수열
// 1 1 2 3 5 8 13

void main()
{
	// 이전수
	int prev = 0;
	// 현재수
	int current = 1;
	// 다음수
	int next;

	int n;
	printf("몇 번째 수열까지 출력할까요?\n");
	scanf("%d", &n);

	// n번째 피보나치 수열까지 구하도록 반복
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", current);

		next = prev + current;
		prev = current;
		current = next;
	}


	/*int n = 0;
	printf("몇 번째 피보나치 수열 :");
	scanf("%d", &n);

	while (n )
	{
		n = n + (n + 1);
		++n;
		printf("%d \n", n);
	}*/

}