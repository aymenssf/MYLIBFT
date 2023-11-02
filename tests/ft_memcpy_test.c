#include <stdio.h>

int main()
{
	char src [] = "DONT PANIC";
	char dest [10] = "";
	unsigned int n = 7;
    ft_memcpy(dest, src, n);
	printf("%s", dest);
}