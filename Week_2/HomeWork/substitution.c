#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Checking if key only consists of alphabets
    string key = argv[1];
    int KeyLength = strlen(key);

    for (int i = 0; i < KeyLength; i++)
    {
        if (!isalpha(key[i])) // if there is not an alphabet then print error
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

    // Check if the key has 26 characters else print message for user
    if (KeyLength != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Check if all the charachters are different(unique)
    for (int i = 0; i < KeyLength; i++)
    {
        for (int j = i + 1; j < KeyLength; j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }

    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    // Convert all alphabets to UPPERCASE
    for (int i = 0; i < KeyLength; i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }

    // The ciphertext has the same length as the plaintext
    int length1 = strlen(plaintext); 
    
  // Print the chiphertext
    printf("ciphertext: ");
  
  // Creating the ciphertext
    for (int i = 0; i < length1; i++)
    {
        if (isupper(plaintext[i]))
        {
            int alphachar = plaintext[i] - 65;
            printf("%c", key[alphachar]);
        }
        else if (islower(plaintext[i]))
        {
            int alphachar = plaintext[i] - 97;
            printf("%c", key[alphachar] + 32);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
