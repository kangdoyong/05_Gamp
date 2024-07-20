#include <stdio.h>	

// for문을 이용해서
// 20부터 50까지의 합계를 구한 후, 출력
void main()
{
	int result = 0;

	for (int i = 20; i <= 50; ++i)
	{
		result += i;
	}

	printf("합계 : %d \n", result);
}