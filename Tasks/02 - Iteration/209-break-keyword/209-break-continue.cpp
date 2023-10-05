#include <stdio.h>

int main()
{
    for (int i = 0; i >= 0; i++)   // potentially loop from 1 to 10  
    {
        printf("Enter a char\n");
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if ((c == 'q') || (c == 'Q'))
        {
            printf("\tUser stopped the loop early at %d\n", i);
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
    }

    for (int i = 0; i <= 10; i++)   // potentially loop from 1 to 10  
    {
        printf("Enter a char\n");
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if ((c == 'q') || (c == 'Q'))
        {
            printf("\tUser stopped the loop early at %d\n", i);
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
        if (i == 10)
        {
            printf("Loop was not ended early\n");
        }
    }
    puts("Done");
}
