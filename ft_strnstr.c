#include <stdio.h>

/*
** ft_strnstr: ищет первое вхождение строки (за исключением
** признак конца строки), на которую указывает
** аргумент haystack, в строку, на которую указывает
** аргумент needle. Если строка haystack имеет
** нулевую длину, то функция вернет указатель
** на начало строки needle.
*/

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	size_t needle_len;

	i = 0;
	if ((needle_len = ft_strlen(needle)) == 0)
		return ((char *)haystack);
	while (i++ <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0]) &&
			(ft_strncmp(haystack, needle, needle_len)) == 0)
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
