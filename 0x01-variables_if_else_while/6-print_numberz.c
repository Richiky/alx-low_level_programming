#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
    char letter = 'z'; 

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }

    putchar('\n'); 
    return 0;
}

