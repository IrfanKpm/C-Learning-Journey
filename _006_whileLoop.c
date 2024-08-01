#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 20)
    {
        i++;

        if (i == 10)
        {
            continue; // Skip the rest of the loop body for i == 10
        }

        if (i > 15)
        {
            break; // Exit the loop when i > 15
        }

        printf("%d\n", i);
    }

    return 0;
}
