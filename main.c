#include <stdio.h>

int main(void)
{
    int answer = 59;
    int number;
    int count = 0;

    do
    {
        printf("input a number :");
        scanf("%d", &number);

        count++;

        if (number < answer)
        {
            printf("higher\n");
        }
        else if (number > answer)
        {
            printf("lower\n");
        }
        else
        {
            printf("correct! %d attempts\n", count);
        }

    } while (number != answer);

    return 0;
}