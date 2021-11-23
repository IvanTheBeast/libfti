#include "libft.h"
static	int countnadi(const	char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return(count);
}

static int finder(const char *s, char c, int *start)
{
	int i;
	int len;

	i = *start;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	*start = i;
	return (len);
}

char **ft_split(char const *s, char c)
{
	int i;
	int len;
	int word_len;
	int start;
	char **stock;

	i = 0;
	if (!s)
		return (NULL);
	word_len = countnadi(s, c);
	stock = (char **)malloc(sizeof(char *) * (word_len + 1));
	if (!stock)
		return (NULL);
	start = 0;
	while (i < word_len)
	{
		len = finder(s, c, &start);
		stock[i] = ft_substr(s, start - len, len);
		i++;
	}
	stock[i] = 0;
	return (stock);
}
