#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Print a pyramid of the given height
    for (int i = 0; i < n; i++)
    {
        int spaces = n - i - 1;
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
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}
