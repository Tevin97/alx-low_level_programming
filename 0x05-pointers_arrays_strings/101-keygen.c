#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 10

char *generate_password(void);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    generate_password();
    return (0);
}

/**
 * generate_password - Generates a random password for crackme 101
 *
 * Description: A valid password for crackme 101 must contain only 62 different
 * characters.
 *
 * Return: The generated random password
 */
char *generate_password(void)
{
    char *password, *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t i;

    srand(time(NULL));
    password = malloc(MAX_PASSWORD_LENGTH + 1); /* Add 1 for null terminator */

    if (!password)
        return (NULL);

    for (i = 0; i < MAX_PASSWORD_LENGTH; i++)
        password[i] = charset[rand() % 62];

    password[MAX_PASSWORD_LENGTH] = '\0';
    printf("%s", password);
    return (password);
}
