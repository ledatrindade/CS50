#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    int cents = get_cents();

    // Calcular o quantidade de quarters para dar ao cliente
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calcular o quantidade de dimes para dar ao cliente
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    //Calcular o quantidade de nickels para dar ao cliente
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calcular o quantidade de pennies para dar ao cliente
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Soma de moedas
    int coins = quarters + dimes + nickels + pennies;

    // imprimir o número total de moedas para dar ao cliente
    printf("%i\n", coins);

    return 0;
}

int get_cents()
{

    int cents;
    do
    {
        // Perguntar quantos centavos o cliente deve
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{

    int r = 0;

    r = cents / 25;

    // cálculo
    return r;
}

int calculate_dimes(int cents)
{

    int r = 0;

    r = cents / 10;

   
    return r;
}

int calculate_nickels(int cents)
{

    int r = 0;

    r = cents / 5;

   
    return r;
}

int calculate_pennies(int cents)
{

    int r = 0;

    r = cents / 1;

 
    return r;
}
