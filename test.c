#include <stdio.h>
#include <string.h>
int main ()
{
    char dest[] = "we ";
    char src[] = "are the chaaampion";
    size_t n = 4;
    printf("%zu", strlcat(dest, src, n));
}