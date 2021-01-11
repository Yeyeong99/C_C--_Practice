#include <stdio.h>

int main(void)
{
    int a, num, max = -1000001;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d\n", &a);
        if (a > max)
        {
            max = a;
            num = i + 1;
        }
    }
    printf("%d\n%d", max, num);

    return 0;
}