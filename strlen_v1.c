#include <stdio.h>

size_t  ft_strlen(char* str)
{
    size_t  len;

    for (len = 0; *str != '\0'; str++)
        len++;
    return (len);
}

int main(void)
{
    printf("Length: %lu\n", ft_strlen("12345"));
    return (0);
}
