#include "main.h"
#include <unistd.h>
/**
 * _putchar.c - writes the charscter c to stdout
 * @c": the character to print
 * Return: 1 on success
 * On error, -1 is returned, and eror is set apropriately
 */
int (char c)
{
return (write(1, &c, 1));
}
