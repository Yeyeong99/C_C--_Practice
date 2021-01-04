#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a); //\n 쓰지 않기, &빠져서 아래 식이 실행 안됨
    for (int i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}