#include <stdio.h>

// �������� ���
// 1�ܺ��� 9�ܱ��� ���� �� ���

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
	// ������ �� ���� ��Ÿ�� ���� ����
	int n = 1;

	// 10 �̸��̶�� �ݺ� (9�ܱ��� ���)
	while (n < 10)
	{
		printf("������ %d��\n", n);
		
		// 1~9���� �����ϸ�, ���� �� ���� ������ ����
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