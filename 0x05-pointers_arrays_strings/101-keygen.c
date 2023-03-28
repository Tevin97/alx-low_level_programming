#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 12

char *generate_password(void);

int main(void)
{
    char *password = generate_password();
    printf("Password: %s\n", password);
    free(password);
    return 0;
}

char *generate_password(void)
{
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-?";
    const size_t charset_size = sizeof(charset) - 1;

    char *password = malloc(MAX_PASSWORD_LENGTH + 1); // Add 1 for null terminator
    if (!password)
    {
        fprintf(stderr, "Error: Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));
    for (size_t i = 0; i < MAX_PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % charset_size];
    }
    password[MAX_PASSWORD_LENGTH] = '\0'; // Add null terminator

    return password;
}
