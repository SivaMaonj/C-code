// C program to print the full pyramid pattern of stars
#include <stdio.h>
 
int main()
{
    ;
 
    // first loop to print all rows
    for (int i = 0; i < 5; i++) {
 
        // inner loop 1 to print white spaces you
        for (int j = 0; j < 2 * (5- i) - 1; j++) {
            printf(" ");
        }
 
        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;}