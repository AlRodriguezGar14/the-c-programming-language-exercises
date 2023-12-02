#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Press ctrl+d to stop printing.\n");
	while ((c = getchar()) != EOF)
		putchar(c);
	printf("No more content to print.\n");
	return 0;
}
