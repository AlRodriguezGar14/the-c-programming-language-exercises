#include <stdio.h>

int	main(void)
{
	int		farenheit;
	int		jump;
	float	celsius;

	printf("Farenheit\tCelsius\n");
	farenheit = 0;
	jump = 20;
	while (farenheit <= 300)
	{
		celsius = 5.0/9.0 * farenheit-32;
		printf("%8d\t%6.1f\n", farenheit, celsius);
		farenheit += jump;
	}
}
