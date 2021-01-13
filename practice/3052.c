#include <stdio.h>

int main()
{
    int num = 0, score = 0;

    for (int i = 0; i < 10; i++)
    {
        int a;
        scanf("%d", &a);
        int b = a % 42;
        if (b != num)
        {
            num = b;
            score += 1;
        }
    }
    printf("%d", score);
    return 0;
}