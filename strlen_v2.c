#include <stdio.h>

size_t  ft_strlen(char* str)
{
    char    *p;

    p = str;
    while (*p != '\0')
        p++;
    return (p - str);
}

int main(void)
{
    printf("Length: %lu\n", ft_strlen("12345"));
    return (0);
}
