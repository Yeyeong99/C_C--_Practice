#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int c = b % 10;
    printf("%d\n", a * c);
    int d = (b % 100 - c) / 10; //-c는 필요 없음
    printf("%d\n", a * d);
    int e = b / 100;
    printf("%d\n", a * e);
    printf("%d\n", a * c + a * d * 10 + a * e * 100); // a*b하면 됨

    return 0;
}