#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Enter population start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("Enter population end size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    for (year = 0; start < end; year++)
    {
        start = start + start / 3 - start / 4;
    }

    // TODO: Print number of years
    printf("Years: %i\n", year);
}