/**
 * _strncat - concatenates two strings, but only up to n bytes of src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
