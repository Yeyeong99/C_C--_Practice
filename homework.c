#include<stdio.h>

int main(void) {
	// HW 1 - 세자릿수의 숫자 순서를 바꾸어 출력하는 프로그램을 제작하기

	int num1;

	scanf("%d", &num1);
	printf("%d%d%d", num1 % 10, num1%100/10,  num1 / 100);


	//HW2 - Fahrenheit(화씨)온도를 Celsius(섭씨) 온도로 바꾸어 출력해주는 프로그램을 제작하세요. 단, 섭씨 온도는 소수점 둘째자리까지 표현됩니다.
	float fah, cel;
	
	scanf("%f", &fah);

	cel = (fah - 32) * 5 / 9;

	printf("%.2f", cel);

	return 0;
}