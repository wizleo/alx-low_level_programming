#include "main.h"
#include <stdlib.h>

/**
 *copychars - copies chars to buffer
 *@b: destination buffer
 *@start: starting char pointer
 *@stop: ending char pointer
 */
void copychars(char *b, char *start, char *stop)
{
	while (start <= stop)
		*b++ = *start++;
	*b = 0;
}

/**
 *wordcount - counts the number of words
 *@str: the sentence string
 *
 *Return: int number of words
 */
int wordcount(char *str)
{
	int words = 0, in_word = 0;

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word)
				words++;
			in_word = 0;
			if (!*str)
				break;
		}
		else
			in_word++;
		str++;
	}
	return (words);
}
