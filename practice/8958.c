#include <stdio.h>
#include <string.h>
int main()
{
    int num, score, total, score_list[80];
    char answer[80];

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", answer);
        for (int j = 0; j < strlen(answer); j++)
        {
            if (answer[j] == 'O')
            {
                score++;
                total += score;
            }
        }
        score_list[i] = total;
        score = 0;
        total = 0;
    }
    for (int i = 0; i < sizeof(score_list); i++)
    {
        printf("%d", score_list[i]);
    }
}