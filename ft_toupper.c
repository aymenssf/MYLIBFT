#include "libft.h"
int ft_toupper(int c)
{
        if(c >= 'a' && c <= 'a')
                c -= 32;
        return (c);
}
#include <stdio.h>
int main()
{
        char c = 'c';
        printf("%c", ft_toupper(c));
}