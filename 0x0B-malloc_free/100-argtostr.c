#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len = 0, pos = 0;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;
        len++; 
    }

    str = malloc(sizeof(char) * (len + 1)); 
    if (str == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[pos] = av[i][j];
            pos++;
        }
        str[pos] = '\n';
        pos++;
    }

    str[pos] = '\0';

    return str;
}
