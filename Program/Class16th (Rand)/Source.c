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

	int life = 5;
	int Player;

	srand(time(NULL));

	int computer = rand() % 50 + 1;

	while (life > 0)
	{
		printf("1���� 50 ������ ������ �Է��ϼ���: ");
		scanf_s("%d", &Player);

		printf("����� �Է��� �� : %d\n", Player);

		if (Player < computer)
		{
			life--;
			printf("Life 1 ����\n");
			printf("UP\n");
		}
		else if (Player > computer)
		{
			life--;
			printf("Life 1 ����\n");
			printf("DOWN\n");
		}
		else
		{
			printf("Victory\n");
			break;
		}
	}

	if (life <= 0)
	{
		printf("Defeat\n");
	}


#pragma endregion


	return 0;
}