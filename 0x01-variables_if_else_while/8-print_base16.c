#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
    putchar(i + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
    putchar(c);
}
putchar('\n');
return (0);
}
