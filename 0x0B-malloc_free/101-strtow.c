#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int i, count = 0, in_word = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (in_word == 0)
            {
                in_word = 1;
                count++;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL or ""
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, word_count = 0, in_word = 0;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);

    words = malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
        return NULL;

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (in_word == 0)
            {
                in_word = 1;
                len = 1;

                for (k = i + 1; str[k] != ' ' && str[k] != '\0'; k++)
                    len++;

                words[j] = malloc(sizeof(char) * (len + 1));

                if (words[j] == NULL)
                {
                    for (j--; j >= 0; j--)
                        free(words[j]);

                    free(words);
                    return NULL;
                }

                for (k = 0; k < len; k++, i++)
                    words[j][k] = str[i];

                words[j][k] = '\0';
                j++;
            }
            else
            {
                words[j - 1][len] = str[i];
                len++;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    words[word_count] = NULL;

    return words;
}
