#include "libft.h"
#include<stdio.h>

int	main(void)
{
	char c = 'Z';
	printf("is alpha should be 1: %i\n", ft_isalpha(c));
	printf("is digit should be 0: %i\n", ft_isdigit(c));
	printf("is alphanum should be 1: %i\n", ft_isdigit(c));
	c = '0';
	printf("is alpha should be 0: %i\n", ft_isalpha(c));
	printf("is digit should be 1: %i\n", ft_isdigit(c));
	printf("is alphanum should be 1: %i\n", ft_isdigit(c));
	c = ',';
	printf("is alphanum should be 0: %i\n", ft_isalnum(c));
	char *cc = "";
	printf("strlen should be 0: %i\n", ft_strlen(cc));
	cc = "coucou";
	printf("strlen should be 6: %i\n", ft_strlen(cc));
	ft_memset(cc, 'a', 8);
	printf("memset should be 'aaaaaaaa' : '%s'", cc); // todo explain bus error
	return (0);
}
