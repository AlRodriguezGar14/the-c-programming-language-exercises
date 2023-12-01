#include <stdio.h>

int	main(void)
{
	int	farenheit;

	printf("Farenheit\tCelsius\n");
	for (farenheit = 0; farenheit <= 300; farenheit += 20)
		printf("%8d\t%6.1f\n", farenheit, (5.0/9.0)*farenheit-32);
}
