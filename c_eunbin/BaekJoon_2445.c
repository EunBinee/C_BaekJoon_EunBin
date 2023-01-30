#include <stdio.h>

int main()
{
    int star = 0;
    int star_count = 1;

    scanf("%d", &star);
    for (int i = 0; i < (star * 2); i++)
    {

        for (int j = 0; j < (star * 2); j++)
        {
            if (j < (star_count) || j >= (star * 2) - star_count)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

        if (i < (star - 1))
        {
            star_count++;
        }
        else if (i >= (star - 1))
        {
            star_count--;
        }
    }

    return 0;
}