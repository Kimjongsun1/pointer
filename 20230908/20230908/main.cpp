#include <stdio.h>

void Num1(void);
void Num2(void);
void Num3(void);
void Num4(void);
void Num5(void);

int main()
{
	
}
void Num1(void)
{
	int num = 123;
	printf("%d\n", num);

	return 0;
}
void NUm2(void)
{
	int num = 123;
	int* ptr = &num;
	printf("%d\n", *ptr);	// �ּҰ� ����Ű�� ��(����) ���
	//printf("%d\n", ptr);	// �ּڰ� ���

	return 0;
}
void Num3(void)
{
	int num = 123;
	int* ptr = &num;
	//int *ptr = &num;
	//int * ptr = &num;

	return 0;
}
void Num4(void)
{
	int* numPtr;      // ������ ���� ����
	int num1 = 10;    // int�� ������ �����ϰ� 10 ����

	numPtr = &num1;   // num1�� �޸� �ּҸ� ������ ������ ����

	printf("%p\n", numPtr);    // 0055FC24: ������ ���� numPtr�� �� ���
	// ��ǻ�͸���, ������ ������ �޶���
	printf("%p\n", &num1);     // 0055FC24: ���� num1�� �޸� �ּ� ���
	// ��ǻ�͸���, ������ ������ �޶���

	return 0;
}
void Num5(void)
{
	int *numPtr;
    printf("%d\n", sizeof(numPtr));    // 4: 32��Ʈ���� int �����ʹ� 4����Ʈ

    printf("%d\n", sizeof(char *));    // 4: 32��Ʈ���� char �����ʹ� 4����Ʈ
}