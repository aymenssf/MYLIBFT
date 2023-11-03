#include <stdio.h>
#include <string.h>
int main ()
{
    char s[] = "SBAAAa3";
    size_t n = 6;
    int c = 'a';
    void *res = memchr(s, c, n);
    printf("%s", (char *)res);
}