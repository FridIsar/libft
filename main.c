#include "libft.h"
#include <stdio.h>
#include <string.h>


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

	char str[29] = "42 is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
    printf("After memset():  %s", str);

	char str2[29] = "42 is for programming geeks.";
    printf("\nBefore ft_bzero(): %s\n", str2);
    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str2 + 13, 8*sizeof(char));
    printf("After ft_bzero():  %s\n", str2);

	const char src[29] = "Helloooo!!";
	char dest[29];
	strcpy(dest,"pilipaloupilou");
	printf("Before ft_memmove dest = %s\n", dest);
	ft_memmove(dest, src, strlen(src)+1);
	printf("After ft_memmove dest = %s\n", dest);

	char string[] = "Hello there, Venus";
    char buffer[19];
    int r;
    r = ft_strlcpy(buffer,string,10);
    printf("Copied '%s' into '%s', length %d\n", string,buffer, r);
	// TODO FIX DIFFERENCE IN LENGTH STRLCPY
	// TODO TEST STRLCAT WITH REAL
	return (0);
}
