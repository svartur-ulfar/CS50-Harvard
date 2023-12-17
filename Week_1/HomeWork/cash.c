#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO the function prompts the user for a number of cents
    int cents;

    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0); // If the user inputs a negative int, prompt the user again.

    return cents; // returns that number as an int
}

int calculate_quarters(int cents)
{
    // TODO the function calculates (and returns as an int)
    // how many quarters a customer should be given if they’re owed
    // some number of cents.

    int quarters = cents / 25;

    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO the function calculates (and returns as an int)
    // how many dimes a customer should be given if they’re owed
    // some number of cents.

    int dimes = cents / 10;

    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO the function calculates (and returns as an int)
    // how many nickels a customer should be given if they’re owed
    // some number of cents.

    int nickles = cents / 5;

    return nickles;
}

int calculate_pennies(int cents)
{
    // TODO the function calculates (and returns as an int)
    // how many pennies a customer should be given if they’re owed
    // some number of cents.

    int pennies = cents;

    return pennies;
}
