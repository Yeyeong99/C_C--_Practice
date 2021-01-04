#include <stdio.h>

int main()
{
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("Hello world\n");
    //     i++;
    // }
    // for (int i = 1; i < 10; i++)
    // {
    //     for (int j = 1; j < 10; j++)
    //     {
    //         printf("%d * %d = %d \n", i, j, i * j);
    //     }
    //     // printf("\n");
    // }
    // int a;
    // scanf("%d", a);
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5 - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}