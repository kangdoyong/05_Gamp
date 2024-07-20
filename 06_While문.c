#include <stdio.h>

// 구구단을 출력
// 1단부터 9단까지 전부 다 출력

// 1 x 1 = 1
// ...
// 1 x 9 = 9

// 2 x 1 = 2
// ...

// 9 x 1 = 9
// ...
// 9 x 9 = 81

void main()
{
	// 구구단 단 수를 나타낼 변수 선언
	int n = 1;

	// 10 미만이라면 반복 (9단까지 출력)
	while (n < 10)
	{
		printf("구구단 %d단\n", n);
		
		// 1~9까지 증가하며, 현재 단 수에 곱해질 변수
		int m = 1;

		while (m < 10)
		{
			printf("%d x %d = %d \n", n, m, n * m);
			++m;
		}
		++n;
	}
	
	
	
	
	/*int n = 1;
	int count = 1;
	
	while (n > 0 || n < 10)
	{


		while (count < 10)
		{
			printf("%d * %d = %d \n", n, count, n * count);
			++count;
		}
	}*/
}