#include <stdio.h>

int	ft_strcmp(const char *a, const char *b)
{
	for (; *a == *b; a++, b++)
		if (*a == '\0')
			return (0);
	return (*a - *b);
}

int	main(void)
{
	char	e[] = "hola";
	char	a[] = "hole";
	char	b[] = "holaa";
	char	c[] = "hola mu";
	char	d[] = "hola mundo";
	char	cmparer[] = "hola mundo";

	printf("compare e: %d\n", ft_strcmp(e, cmparer));
	printf("compare a: %d\n", ft_strcmp(a, cmparer));
	printf("compare b: %d\n", ft_strcmp(b, cmparer));
	printf("compare c: %d\n", ft_strcmp(c, cmparer));
	printf("compare d: %d\n", ft_strcmp(d, cmparer));
	return (0);
}
