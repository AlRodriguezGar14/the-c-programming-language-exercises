#include <stdio.h>

int	main(void)
{
	char	c;

	while ((c = getchar()) != EOF)
		putchar(c);
	printf("No more content to print.\n");
	return 0;
}
