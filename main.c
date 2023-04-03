#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>


void checkLeaks() {
	system("leaks a.out");
}
/*
int main(void)
{
	printf("ft_strtrim2 |%s|\n", ft_strtrim("",  ""));
	atexit(checkLeaks);
	return (0);
}*/


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
	printf("strlen should be 0: %i\n", (int) ft_strlen(cc));
	cc = "coucou";
	printf("strlen should be 6: %i\n", (int) ft_strlen(cc));

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
    char last[] = "Thisais q";
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

	printf("ft_strncmp : %i, %i\n", ft_strncmp(first, last, 5), strncmp(first, last, 5));

	const char str3[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str3, ch, strlen(str3));

   printf("String after |%c| is - |%s|\n", ch, ret);

      char str4[15];
   char str5[15];
   memcpy(str4, "BBC", 6);
   memcpy(str5, "BBCDEF", 6);
   printf("ft_memcmp : %i\n", memcmp(str4, str5, 5));

   //char src2[50] = "http://www.tutorialspoint.com";
   char dest2[50];
   strcpy(dest2,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest2);
   ft_memmove(dest2+3, dest2, strlen(dest2)+1);
   printf("After memcpy dest = %s\n", dest2);

   const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 0);
	printf("ft_strnstr : %s\n", ptr);

	//void *test = calloc(4, 4);
	printf("ft_calloc should be 0 : %i\n", (((int *)ft_calloc(4, 4))[0]));
	char *test2 = ft_strdup("coucou");
	printf("should be coucou : %s\n", test2);

	const char *tt = "   -2147483648";
	printf("atoi : %i\n", atoi(tt));
	printf("ft_atoi : %i\n", ft_atoi(tt));

	printf("substr: %s\n", ft_substr("coupoucou", 3, 3));

	printf("strjoin %s\n", ft_strjoin("coucou",  "ca va"));
	printf("ft_strtrim |%s|\n", ft_strtrim(" loremamet ",  " "));
	printf("ft_strtrim2 |%s|\n", ft_strtrim("",  ""));
	char **split = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	for (int i = 0; i < 13; i++)
		printf("%s|\n",split[i]);
	printf("itoa: %s\n", ft_itoa(-12));

	int fd = open("not_z", O_WRONLY);
	printf("fd is %i\n", fd);
	ft_putnbr_fd(-2147483648, fd);
	printf("substr2: %s\n", ft_substr("hola", 2, 3));
	//atexit(checkLeaks);
	return (0);
}

