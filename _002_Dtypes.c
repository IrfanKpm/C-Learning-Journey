#include <stdio.h>

#define MAX 100

int main()
{
    int x = 10;
    float y = 1.2;
    char c = 'a';
    char nn[5] = "abcd";

    typedef int token;

    token key1 = 156845;
    token key2 = 147895;

    int yy = MAX;

    // Corrected printf statements
    printf("c = %c\n", c);       // Print a character
    printf("nn = %s\n", nn);     // Print a string
    printf("key2 = %d\n", key2); // Print an integer

    return 0;
}
