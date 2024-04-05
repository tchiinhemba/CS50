#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}