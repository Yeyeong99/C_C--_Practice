#include <stdio.h>

int main()
{
    int num, score =0;

    for (int i = 0; i < 10; i++)
    {
        int a;
        scanf("%d", &a);
        num = a % 42;
        if (a != num)
        {
            score += 1;
        }
    }
    printf("%d %d", num, score);
    return 0;
}