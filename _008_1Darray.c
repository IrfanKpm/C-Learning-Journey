#include <stdio.h>

int main()
{

    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    numbers[2] = 10;

    printf("Modified array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array length: %d\n", length);

    return 0;
}
