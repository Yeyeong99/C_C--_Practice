#include <stdio.h>

int main()
{
    int num = 0, score = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &i);
        int b = i % 42;
        if (b != num)
        {
            num = b;
            score += 1;
        }
    }
    printf("%d", score);
    return 0;
}