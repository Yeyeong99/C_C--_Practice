#include <stdio.h>

// int main()
// {
//     int t;
//     int count = 0;
//     scanf("%d", &t);
//     while (count < t)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         printf("%d \n", a + b);
//         count += 1;
//     }
//     return 0;
// }

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    while (a)
    {
        printf("%d\n", a + b);
        scanf("%d %d", &a, &b);
    }
    return 0;
}