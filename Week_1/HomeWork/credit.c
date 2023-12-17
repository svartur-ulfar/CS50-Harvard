#include <cs50.h>
#include <math.h>
#include <stdio.h>

long get_cardNr(void);
int check_cardNr(long card_number);
void print_cardType(long card_number);

int main(void)
{
    // Get Card Number
    long card_number = get_cardNr();

    // Check if Card Number is Valid
    int check = check_cardNr(card_number);

    // If the Card Number is VALID
    if (check)
        // Print Card Type
        print_cardType(card_number);
    else
        printf("INVALID\n");
}

long get_cardNr(void)
{
    // Get Card Number from User

    long card_number = 0;

    do
    {
        card_number = get_long("Number: ");
    }
    while (card_number < 1);

    return card_number;
}

int check_cardNr(long card_number)
{
    // Check if the Card Number is Valid by the proided formula
    int sum1 = 0;
    int sum2 = 0;

    while (card_number > 0)
    {
        sum1 = sum1 + (card_number % 10);
        card_number = card_number / 10;

        int digit = (card_number % 10) * 2;

        if (digit > 9)
            sum2 = sum2 + (digit % 10) + (digit / 10);
        else
            sum2 = sum2 + digit;

        card_number = card_number / 10;
    }

    // Return 1 if the formula was respected and 0 otherwise
    if ((sum1 + sum2) % 10 == 0)
        return 1;
    else
        return 0;
}

void print_cardType(long card_number)
{
    // Check and Print the Type of the Card
    int digits = 0;

    do
    {
        card_number /= 10;
        digits++;
    }
    while (card_number > 99);

    if ((digits + 2 == 15) && ((card_number == 34) || (card_number == 37)))
        printf("AMEX\n");

    else if ((digits + 2 == 16) && ((card_number > 50) && (card_number < 56)))
        printf("MASTERCARD\n");

    else if (((digits + 2 == 16) || (digits + 2 == 13)) && ((card_number / 10) == 4))
        printf("VISA\n");

    else
        printf("INVALID\n");
}




