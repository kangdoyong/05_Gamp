#include <stdio.h>

// while���� �̿��ؼ� 10!�� ���
// 10! = 1 *  2 * 3 * 4 * 5 ... * 10 = 3628800

void main()
{
	// 1~10���� ������ ����
	int count = 1;
	// ����� ������ ����
	int result = 1;

	while (count <= 10)
	{
		result *= count++;
	}
	printf("10!�� %d \n", result);

	
	/*int result = 1;
	int count = 2;
	while (count <= 10)
	{
		result = result * count;
		++count;
	}
	printf("����� %d \n", result);*/
}