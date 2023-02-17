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

	char string[] = "Hqqqqqqqqello there, Venus";
    char buffer[12];
    int r;
    r = ft_strlcpy(buffer,string,1);
    printf("Copied '%s' into '%s', length %d\n", string,buffer, r);

	char first[] = "This is ";
    char last[] = "aewewewewg";
    int r2;
    int size2 = 0;
    char buffer2[size2];
    strcpy(buffer2,first);
    r2 = strlcat(buffer2,last,size2);
    puts(buffer2);
    printf("Value returned: %d\n",r2);
    if( r2 > size2 )
        puts("String truncated");
    else
        puts("String was fully copied");

	printf("ft_toupper : %c\n", ft_toupper('A'));
	printf("ft_tolower : %c\n", ft_tolower('a'));

	printf("ft_strchr : %s\n", ft_strchr("cou\0cou", '\0'));
	printf("ft_strrchr : %s\n", ft_strrchr("co\0ucou", '\0'));

	printf("ft_strncmp ")
	return (0);
}
