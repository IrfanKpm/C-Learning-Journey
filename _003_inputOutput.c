#include <stdio.h>

void main()
{

    int x;
    printf("enter value of x : ");
    scanf("%d", &x);
    printf("%d\n", x + 6);

    // %d --> int
    // %f --> float
    // %c --> char
    // %s --> string

    // Consume the newline character left in the buffer after scanf
    getchar(); // Read the leftover newline character

    char c;
    printf("Enter a character : ");
    c = getchar();
    putchar(c);

    char name[20];
    gets(name);
    puts(name);
}
