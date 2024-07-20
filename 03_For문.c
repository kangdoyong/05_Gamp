#include <stdio.h>

// for문으로 별 찍기
// for문을 중첩해서, 2중 for문을 이용

// *
// **
// ***
// ****
// *****

// 2중 for문
// 바깥쪽 -> y축 (행)
// 안쪽 -> x축 (열)

// for문 안에서 쓸 수 있는거
// printf("*");
// printf("\n");

void main()
{
	// y축
	//for (int i = 0; i < 5; ++i)
	//{
	//	// x축
	//	for (int j = 0; j <= i; ++j)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}

	// *****
	// ****
	// ***
	// **
	// *

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}


	/*for (int i = 5; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}*/
}