#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    int length = strlen(argv[1]);

    for (int i = 0; i < length; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] from a `string` to an `int`
    int key = atoi(argv[1]) % 26;

    // Prompt user for plaintext
    string PlainText = get_string("plaintext: ");
    int length1 = strlen(PlainText);

    printf("ciphertext: ");

    // For each character in the plaintext:
    for (int i = 0; i < length1; i++)
    {
        // Print the current char if is not an alphabet
        if (!isalpha(PlainText[i]))
        {
            printf("%c", PlainText[i]);
            continue;
        }

        int ascii_cd = 0;
        // If the char is an UPPERCASE -- int ascii_cd = isupper(PlainText[i] ? 65 : 97);
        if (isupper(PlainText[i]))
        {
            ascii_cd = 65;
        }
        else
        {
            ascii_cd = 97;
        }

        // Distance betweetn our element and 'a' or 'A'
        int dist = PlainText[i] - ascii_cd;

        // Rotate the character if it's a letter
        int Cypher = ((dist + key) % 26) + ascii_cd;

        // Print the ciphered char
        printf("%c", Cypher);
    }

    printf("\n");
    return 0;
}
