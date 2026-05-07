#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter a number: ");
    }
    while (n <= 0 || n >= 9);
    // Calculate Spaces and Bricks in the row
    for (int i = 0; i < n; i++)
    {
        // Space
        int spaces = n - (i + 1);
        int bricks = i + 1;
        print_row(spaces, bricks);
    }
}

void print_row(int spaces, int bricks)
{
    // Print Spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print Bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Print 2 spaces as gap between the walls
    printf("  ");

    // Print bricks after space
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Next row
    printf("\n");
}
