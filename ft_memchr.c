#include <stdio.h>

void *memchr (const void *arr, int c, size_t n)
{
	while(n--)
	{
		if (*(++tmp) == c)
			return ((void *)tmp);
	}
	return (NULL);
}
