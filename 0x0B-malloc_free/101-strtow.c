#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
    int count = 0, in_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }

        str++;
    }

    return count;
}

/**
 * strtow - Split a string into an array of words
 * @str: The string to split
 *
 * Return: An array of strings, each containing a word from the input string
 */
char **strtow(char *str)
{
    int num_words, i = 0;
    char **words, *word;

    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);
    words = malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL)
        return NULL;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            str++;
            continue;
        }

        word = str;
        while (*str != '\0' && *str != ' ')
            str++;

        words[i] = malloc(sizeof(char) * (str - word + 1));
        if (words[i] == NULL)
        {
            for (i--; i >= 0; i--)
                free(words[i]);

            free(words);
            return NULL;
        }

        memcpy(words[i], word, str - word);
        words[i][str - word] = '\0';
        i++;
    }

    words[num_words] = NULL;
    return words;
}
