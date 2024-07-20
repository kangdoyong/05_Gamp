#include <stdio.h>

// while문을 이용해서, 사용자가 원하는 구구단을 출력
// 1~9단까지
// 사용자가 입력한 값이 1~9 사이의 수가 아니라면 잘못된 입력임을 알리고, 다시 입력을 받게끔

// input
// 구구단 몇 단을 출력할까요?
// 5

// output
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 9 = 45

void main()
{
	// 사용자가 입력한 값을 저장할 변수 (몇 단?)
	int n = 0;

	// n의 값이 1보다 작거나, 9보다 크다면 아래의 코드를 반복
	while (n < 1 || n > 9)
	{
		printf("몇 단을 출력할까요?\n");
		scanf("%d", &n);
	}
	
	// 1부터 9까지 증가할 변수
	int count = 1;
	while (count < 10)
	{
		printf("%d x %d = %d \n", n, count, n * count);
		++count;
	}



	/*int a;
	printf(" 원하는 구구단의 값을 입력 : \n");
	scanf("%d", &a);

	int count = 1;
	int result = 1;

	if (1 <= a && a <= 9)
	{
		while (count < 10)
		{
			result = a * (count * result);
			++count;
			printf("5");
		}
	}
	else
	{
		printf("잘못된 입력값입니다.");
	}*/
}