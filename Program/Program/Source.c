#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int Add(int x, int y)
{
	return x + y;
}

int Substract(int x, int y)
{
	return x - y;
}

int Multiply()
{
	return 5 * 5;
}

int Divide()
{
	return 5 / 5;
}

int Calculator(int(fptr)())
{
	return fptr();
}

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ�
	// �����Դϴ�.

	// int (*fptr)(int, int);
	// 
	// fptr = Add;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10,20));
	// 
	// fptr = Substract;
	// 
	// printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
	// ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

	// printf("Calculator�� �� : %d\n", Calculator(Multiply));

	// �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ�
	// �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ���
	// �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

#pragma endregion

#pragma region rend �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.
	
	// UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�� �����
	// �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(time(NULL));
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region UP - DOWN ����

	int Life;
	int num1;

	srand(time(NULL));

	int random = rand() % 50;
	
	for (int Life = 0; Life <= 5; Life++)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num1);

		printf("����� �Է��� �� : %d\n", num1);

		if (num1 < random)
		{
			printf("Life 1 ����\n");
			printf("UP\n");
		}
		else if (num1 > random)
		{
			printf("Life 1 ����\n");
			printf("DOWN\n");
		}
		else
		{
			break;
		}
	}

	if (Life == 0)
	{
		printf("Defeat\n");
	}
	else
	{
		printf("Victory\n");
	}
	

#pragma endregion


	return 0;
}