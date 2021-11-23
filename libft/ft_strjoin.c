#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t is1;
	size_t is2;
	size_t ist;
	char *ptr;

	if (!s1 || !s2)
		return (NULL);
	is1 = ft_strlen((char*)s1);
	is2 = ft_strlen(s2);
	ist = is1 + is2 + 1 ;
	ptr = malloc(sizeof(char) * ist);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, is1);
	ft_memmove(ptr + is1, s2, is2);
	ptr[ist - 1] = '\0';
	return (ptr);
}
