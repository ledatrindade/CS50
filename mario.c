#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int l, j, n;

    n = get_int("Height: "); // perguntar a altura.

    while ((n < 1) || (n > 8)) // laço de repetição casp não esteja entre 1 ou 8.
    {
        n = get_int("Height: ");
    }

    for (l = 1; l <= n; l++)
    {
        for (j = n - l; j >= 1; j--)

            printf(" "); // para coseguir ir para direita.

        for (j = 1; j <= l; j++)
        {

            printf("#"); // os tijolos.
        }
        printf("\n");
    }
    return 0;
}
