#include "libft.h"
void *ft_memcpy(void *str1, const void *str2, size_t n)
{
    char *dst;
    char *src;


    dst = (char*)str1;
    src = (char*)str2;
	if (dst == src)
		return (dst);

    while (n > 0)
    {
        *dst = *src;
        dst++;
        src++;
        n--;
    }
    return ((void*)str1);
}
