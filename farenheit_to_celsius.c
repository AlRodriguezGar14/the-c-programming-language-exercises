#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

int	main(void)
{
	int	farenheit;

	printf("Farenheit\tCelsius\n");
	for (farenheit = MIN; farenheit <= MAX; farenheit += STEP)
		printf("%8d\t%6.1f\n", farenheit, (5.0/9.0)*farenheit-32);
}
