#include <stdio.h>

void main()
{
	// while�� ��ø ���

	int a = 0;
	
	// a�� ���� 3 �̸��̶�� �ݺ�
	while (a < 3)
	{
		// �ٱ��� while���� ������ ������
		// ������� ���� b�� ����

		int b = 0;

		printf("a�� %d \n", a++);
		
		// b�� ���� 3�̸��̶�� �ݺ�
		while (b < 3)
		{
			printf("b�� %d \n", b++);
		}
	}
}