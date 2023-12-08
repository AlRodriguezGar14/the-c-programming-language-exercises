#include <stdio.h>

void	ft_strcpy(char	*dest, char	*src)
{
	while ((*dest++ = *src++))
		;
}

int	main(void)
{
	char	dst[16] = {0};
	char	src[] = "hola mundo";
	printf("old dst: %s\n", dst);
	ft_strcpy(dst, src);
	printf("new dst: %s\n", dst);
	return (0);
}
