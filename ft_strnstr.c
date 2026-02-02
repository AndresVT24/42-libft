#include <stddef.h>

size_t ft_strlen(const char *s); // ya la tenemos

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t needle_len;

    needle_len = ft_strlen(needle);
    if (needle_len == 0)
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i + needle_len <= len)
    {
        j = 0;
        while (j < needle_len && haystack[i + j] == needle[j])
            j++;
        if (j == needle_len)
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}