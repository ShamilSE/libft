#include <stdio.h>

int ft_isalnum(int c)
{
	return (c >= 48 && c < 58) || (c >= 65 && c < 91) || (c >= 97 && c < 123) ? 1 : 0;
}

int main()
{
	printf("%d\n", ft_isalnum('0'));
}
