#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years, nv, nm; // as variáveis

    years = 0; // o ano inicial

    do // as repetições, começando por star e terminando em end
    {
        start = get_int("Start size: ");
    }
    while (start <= 8);

    do
    {
        end = get_int("End size: ");
    }
    while (start > end);

    if (start != end) // nosso querido cáculo
    {
        do
        {
            nv = start / 3;
            nm = start / 4;
            start = start + nv - nm;
            years = years + 1;
        }
        while (start < end);

        printf("Years: %d\n", years);
    }
    else
    {
        printf("Years: %d\n", years);
    }
    return 0;
}
