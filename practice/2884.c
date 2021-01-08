#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);
    if (h == 0)
    {
        if (m < 45)
        {
            h += 23;
            m += 60;
        }
    }
    else
    {
        if (m < 45)
        {
            h -= 1;
            m += 60;
        }
    }

    printf("%d %d", h, m - 45);

    return 0;
}