#include <stdio.h>

// while���� �̿��ؼ�, ����ڰ� ���ϴ� �������� ���
// 1~9�ܱ���
// ����ڰ� �Է��� ���� 1~9 ������ ���� �ƴ϶�� �߸��� �Է����� �˸���, �ٽ� �Է��� �ްԲ�

// input
// ������ �� ���� ����ұ��?
// 5

// output
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 9 = 45

void main()
{
	// ����ڰ� �Է��� ���� ������ ���� (�� ��?)
	int n = 0;

	// n�� ���� 1���� �۰ų�, 9���� ũ�ٸ� �Ʒ��� �ڵ带 �ݺ�
	while (n < 1 || n > 9)
	{
		printf("�� ���� ����ұ��?\n");
		scanf("%d", &n);
	}
	
	// 1���� 9���� ������ ����
	int count = 1;
	while (count < 10)
	{
		printf("%d x %d = %d \n", n, count, n * count);
		++count;
	}



	/*int a;
	printf(" ���ϴ� �������� ���� �Է� : \n");
	scanf("%d", &a);

	int count = 1;
	int result = 1;

	if (1 <= a && a <= 9)
	{
		while (count < 10)
		{
			result = a * (count * result);
			++count;
			printf("5");
		}
	}
	else
	{
		printf("�߸��� �Է°��Դϴ�.");
	}*/
}