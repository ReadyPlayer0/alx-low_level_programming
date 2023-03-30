/**
 * _strncat - concatenates two strings, but only up to n bytes of src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, const char *src, size_t n)
{
    char *dest_start = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (n-- > 0 && *src != '\0') {
        *dest++ = *src++;
    }

    *dest = '\0';

    return dest_start;
}
