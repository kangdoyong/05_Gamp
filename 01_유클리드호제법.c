#include <stdio.h>

// 유클리드 호제법
// 주어진 두 수의 최대공약수를 구하는 알고리즘

// 순서
// n과 m을 선언한 후, 사용자 입력

// 최대공약수를 구할 때까지, 연산을 반복
// 조건 -> m의 값이 0이라면, n의 최대 공약수
//		  최대공약수를 구했다면 탈출

// 반복해야하는 연산
// 반복문 안에서 선언한 temp에 n을 m으로 나눈, 나머지를 입력
// n에는 m을 대입, m에는 temp를 대입

void main()
{
	int n, m;
	printf("n : ");
	scanf("%d", &n);

	printf("m : ");
	scanf("%d", &m);

	// 최대공약수를 구하지 못했다면, 반복
	while (m != 0)
	{
		int temp = n % m;

		n = m;
		m = temp;
	}
	printf("최대 공약수는 %d \n", n);

	/*int n, m;
	printf("n 입력:");
	scanf("%d", &n);
	printf("m 입력:");
	scanf("%d", &m);

	while (m != 0)
	{
		int temp = n % m;
		printf("최대공약수 %d \n", temp);
	}*/

}