#include <stdio.h>

#define STEP 20
#define MIN 0
#define MAX 300

int	main(void)
{
	int		farenheit;
	int		jump;
	float	celsius;

	printf("Farenheit\tCelsius\n");
	farenheit = MAX;
	while (farenheit >= MIN)
	{
		celsius = 5.0/9.0 * farenheit-32;
		printf("%8d\t%6.1f\n", farenheit, celsius);
		farenheit -= STEP;
	}
}
