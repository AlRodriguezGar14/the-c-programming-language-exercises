#include <stdlib.h>
#include <string.h>
#include <stdio.h>


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

char *itoa_recursive(int n, char *output, int operator)
{
    if (n > 0)
        output = itoa_recursive(n / 10, output, operator -1);
    output[operator] = (n % 10) + '0';
    return output;
}

char    *ft_itoa(int input)
{
    long int    n, operator;
    char        *unsigned_output, *output;
    int         sign;
    
    n = input;
    sign = 0;
    if (n < 0)
    {
        sign = 1;
        n *= -1;
    }
    operator = extract_operator(n);
    unsigned_output = (char *)calloc(operator + 1, sizeof(char));
    itoa_recursive(n, unsigned_output, operator - 1);

    output = (char *)calloc((1 * sign) +  strlen(unsigned_output), sizeof(char));

    if (sign)
        output[0] = '-';
    strcat(output, unsigned_output);
    return output;
}


int main(void)
{
    char    *input, *chared;
    int     inp;

    inp = 42;
    while (inp != 0)
    {
        printf("Write your input: ");
        scanf("%s", input);
        inp = atoi(input);
        chared = ft_itoa(inp);
        printf("str number %s\n", chared);
        free(chared);
    }
    return (0);
}
