#include <stdlib.h>  // malloc
#include <stddef.h>  // size_t

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_memset(ptr, 0, count * size);
    return (ptr);
}