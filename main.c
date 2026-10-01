#include <stdio.h>

int main(void)
{
    int number;

    printf("input a number :");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }

    printf("The absolute value is %d\n", number);

    return 0;
}