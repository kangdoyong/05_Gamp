#include <stdio.h>

void main()
{
	// while문 중첩 사용

	int a = 0;
	
	// a의 값이 3 미만이라면 반복
	while (a < 3)
	{
		// 바깥쪽 while문의 영역이 끝나면
		// 사라지는 변수 b를 선언

		int b = 0;

		printf("a는 %d \n", a++);
		
		// b의 값이 3미만이라면 반복
		while (b < 3)
		{
			printf("b는 %d \n", b++);
		}
	}
}