#include <stdio.h>

// while���� �̿��ؼ� 1���� 100���� ���� �հ踦 ���� �� ������ּ���.
// ��� : 5050

void main()
{
	// �հ踦 ������ ����
	int result = 0;

	// 1���� 100(101)���� ������ų ����
	int count = 1;

	while (count <= 100)
	{
		// ���� ���� ������
		// +=, -=, *=, /=
		// ���� ���� ���� ���� Ư�� ���� ������ ��, ���� ���� ����
		//result += count++;

		result = result + count;
		++count;
	}
	printf("�հ�� %d \n", result);
}