#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: the number of command line arguments.
 * @argv: an array containing the command line arguments.
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (int i = 1; i < argc; i++)
    {
        char *num = argv[i];

        for (int j = 0; num[j] != '\0'; j++)
        {
            if (num[j] < '0' || num[j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }

        sum += atoi(num);
    }

    printf("%d\n", sum);
    return (0);
}
