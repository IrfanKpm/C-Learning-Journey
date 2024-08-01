#include <stdio.h>

int main()
{

    printf("Using the for loop:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");

    int j = 1;
    printf("Using the do-while loop:\n");
    do
    {
        printf("%d\n", j);
        j++;
    } while (j <= 10);

    return 0;
}
