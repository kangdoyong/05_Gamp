#include <stdio.h>

// for������ �� ���
// for���� ��ø�ؼ�, 2�� for���� �̿�

// *
// **
// ***
// ****
// *****

// 2�� for��
// �ٱ��� -> y�� (��)
// ���� -> x�� (��)

// for�� �ȿ��� �� �� �ִ°�
// printf("*");
// printf("\n");

void main()
{
	// y��
	//for (int i = 0; i < 5; ++i)
	//{
	//	// x��
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