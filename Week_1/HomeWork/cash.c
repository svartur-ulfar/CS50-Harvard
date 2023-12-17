/* 
  When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). 
  Fortunately, computer science has given cashiers everywhere ways to minimize numbers of coins due: greedy algorithms.

  According to the National Institute of Standards and Technology (NIST), a greedy algorithm is one “that always takes the best immediate, or local, solution while finding an answer. 
  Greedy algorithms find the overall, or globally, optimal solution for some optimization problems, but may find less-than-optimal solutions for some instances of other problems.”

  What’s all that mean? Well, suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). 
  The problem to be solved is to decide which coins and how many of each to hand to the customer. 
  Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. 
  For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. 
  (That bite is “best” inasmuch as it gets us closer to 0¢ faster than any other coin would.) 
  
  Note that a bite of this size would whittle what was a 41¢ problem down to a 16¢ problem, since 41 - 25 = 16. 
  That is, the remainder is a similar but smaller problem. 
  Needless to say, another 25¢ bite would be too big (assuming the cashier prefers not to lose money), 
  and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. 
  
  At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. 
  The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

  It turns out that this greedy approach (i.e., algorithm) is not only locally optimal but also globally so for America’s currency (and also the European Union’s). 
  That is, so long as a cashier has enough of each coin, this largest-to-smallest approach will yield the fewest coins possible. 
  
  How few? Well, you tell us!
*/  

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
