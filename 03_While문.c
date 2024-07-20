#include <stdio.h>

// while문을 이용해서 1부터 100까지 수의 합계를 구한 후 출력해주세요.
// 결과 : 5050

void main()
{
	// 합계를 저장할 변수
	int result = 0;

	// 1부터 100(101)까지 증가시킬 변수
	int count = 1;

	while (count <= 100)
	{
		// 복합 대입 연산자
		// +=, -=, *=, /=
		// 왼쪽 값의 현재 값에 특정 값을 연산한 후, 왼쪽 값에 대입
		//result += count++;

		result = result + count;
		++count;
	}
	printf("합계는 %d \n", result);
}