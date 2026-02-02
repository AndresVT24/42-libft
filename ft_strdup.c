#include <stdlib.h> // malloc
#include <stddef.h> // size_t

size_t ft_strlen(const char *s); // ya la tenemos
void *ft_memcpy(void *dst, const void *src, size_t n); // ya la tenemos

char *ft_strdup(const char *s1)
{
    size_t len;
    char *dup;

    len = ft_strlen(s1) + 1; // +1 para '\0'
    dup = (char *)malloc(len);
    if (!dup)
        return (NULL);
    ft_memcpy(dup, s1, len);
    return (dup);
}