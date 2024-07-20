#include <stdio.h>

// while문을 이용해서 10!을 출력
// 10! = 1 *  2 * 3 * 4 * 5 ... * 10 = 3628800

void main()
{
	// 1~10까지 증가할 변수
	int count = 1;
	// 결과를 저장할 변수
	int result = 1;

	while (count <= 10)
	{
		result *= count++;
	}
	printf("10!는 %d \n", result);

	
	/*int result = 1;
	int count = 2;
	while (count <= 10)
	{
		result = result * count;
		++count;
	}
	printf("결과는 %d \n", result);*/
}