#include <stdio.h>
#include <string.h>

void	print_output(char longest[1024])
{
	printf("--------------------------------\n");
	printf("%s\n", longest);
	printf("The longest block has a length of: %lu chars.\n", \
			strlen(longest));
}

void	get_lines()
{
	char	c;
	int		len;
	char	string_long[1024];
	char	string_base[1024];

	len = 0;
	string_base[0] = '\0';
	string_long[0] = '\0';
	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
		{
			string_base[len] = c;
			string_base [len + 1] = '\0';
			++len;
		}
		else {
			if (strlen(string_base) >= strlen(string_long))
				strcpy(string_long, string_base);
			len = 0;
			string_base[len] = '\0';
		}
	}
	print_output(string_long);
}

int	main(void)
{
	get_lines();
	return 0;
}
