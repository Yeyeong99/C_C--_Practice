#include <stdio.h>
#include <string.h>
int main()
{
    int num, score, total;
    char answer[80];

    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", answer);
        score = 1, total = 0;
        for (int j = 0; j < strlen(answer); j++)
        {
            if (answer[j] == 'O')
            {
                total += score;
                score++;
            }
            else
            {
                score = 1;
            }
        }
        printf("%d \n", total);
    }
    return 0;
}