#include<stdio.h>

int main(void) {
	// HW 1 - ���ڸ����� ���� ������ �ٲپ� ����ϴ� ���α׷��� �����ϱ�

	int num1;

	scanf("%d", &num1);
	printf("%d%d%d", num1 % 10, num1%100/10,  num1 / 100);


	//HW2 - Fahrenheit(ȭ��)�µ��� Celsius(����) �µ��� �ٲپ� ������ִ� ���α׷��� �����ϼ���. ��, ���� �µ��� �Ҽ��� ��°�ڸ����� ǥ���˴ϴ�.
	float fah, cel;
	
	scanf("%f", &fah);

	cel = (fah - 32) * 5 / 9;

	printf("%.2f", cel);

	return 0;
}