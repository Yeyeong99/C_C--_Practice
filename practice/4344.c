#include <stdio.h>

int main()
{
    int c, n, num, score_list[1000];
    double sum, average;
    sum = 0.0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            int score;
            scanf("%d", &score);
            sum += score;
            score_list[i] = score;
        }
        average = sum / n;
        for (int j = 0; j < n; j++)
        {
            if (average < score_list[i])
                num++;
        }

        printf("%.3lf%%", (double)num * 100 / n);
    }
    return 0;
}
