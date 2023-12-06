#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int  extract_operator(long int nbr)
{
    long int  operator;

    operator = 0;
    while (nbr > 0)
    {
        operator++;
        nbr /= 10;
    }
    return (operator);
}

char    *stringify_nbr(int nbr, char *output, int idx, long int operator)
{
   while (operator >= idx) 
   {
       output[operator--] = (nbr % 10) + '0';
       nbr /= 10;
   }
   if (!output[0])
       output[0] = '-';
    return output;
}

char    *ft_itoa(int input)
{
    int         initial;
    long int    n, operator;
    char        *output;
    
    initial = 0;
    n = input;
    if (input < 0)
    {
        n *= -1;
        initial = 1;
    }
    operator = extract_operator(n);
    output = (char *)calloc(operator + 1, sizeof(char));

    stringify_nbr(n, output, initial, (operator -1 )+ initial);
    return output;
}

int main(void)
{
    char    *input;
    int     inp;

    inp = 42;
    while (inp != 0)
    {
        printf("Write your input: ");
        scanf("%s", input);
        inp = atoi(input);
        char    *chared = ft_itoa(inp);
        printf("str number %s\n", chared);
    }
    return (0);
}
