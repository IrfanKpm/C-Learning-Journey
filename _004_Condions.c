#include <stdio.h>

int main()
{
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0)
    {
        printf("The number %d is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("The number %d is negative.\n", number);
    }
    else
    {
        printf("The number is zero.\n");
    }

    // Additional example with ranges
    if (number > 100)
    {
        printf("The number %d is greater than 100.\n", number);
    }
    else if (number > 0 && number <= 100)
    {
        printf("The number %d is between 1 and 100.\n", number);
    }
    else if (number < 0 && number >= -100)
    {
        printf("The number %d is between -1 and -100.\n", number);
    }
    else
    {
        printf("The number %d is less than -100.\n", number);
    }

    return 0;
}
