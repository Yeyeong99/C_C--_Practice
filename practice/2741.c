#include <stdio.h>

int main()
{
    // int a;
    // scanf("%d", &a);
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("%d\n", i);
    // }
    // return 0;

    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", a - i);
    }
    return 0;
}