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
	printf("%d\n", *ptr);	// 주소가 가르키는 값(내용) 출력
	//printf("%d\n", ptr);	// 주솟값 출력

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
	int* numPtr;      // 포인터 변수 선언
	int num1 = 10;    // int형 변수를 선언하고 10 저장

	numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

	printf("%p\n", numPtr);    // 0055FC24: 포인터 변수 numPtr의 값 출력
	// 컴퓨터마다, 실행할 때마다 달라짐
	printf("%p\n", &num1);     // 0055FC24: 변수 num1의 메모리 주소 출력
	// 컴퓨터마다, 실행할 때마다 달라짐

	return 0;
}
void Num5(void)
{
	int *numPtr;
    printf("%d\n", sizeof(numPtr));    // 4: 32비트에서 int 포인터는 4바이트

    printf("%d\n", sizeof(char *));    // 4: 32비트에서 char 포인터는 4바이트
}