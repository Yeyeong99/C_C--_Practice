#include <stdio.h>

int main()
{
    int a, b, c, i, multi;
    int d[10000] = {0};
    scanf("%d\n%d\n%d", &a, &b, &c);
    multi = a * b * c;

    while (multi != 0)
    {
        i = multi % 10;
        multi /= 10;
        d[i]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", d[i]);
    }
}