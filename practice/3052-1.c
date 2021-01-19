#include <stdio.h>

int main()
{
    int result = 0; //
    int d[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &d[i]);
        d[i] = d[i] % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (d[i] == d[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            result++;
        }
    }
    printf("%d", result);

    return 0;
}