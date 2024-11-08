/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:12:41 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/03 23:56:14 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(char const *s1, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		while (s1[i] == c)
			i++;
		if (s1[i] && s1[i] != c)
			count++;
		while (s1[i] != c && s1[i])
			i++;
	}
	return (count);
}

static void	*free_arr(char **p, int r)
{
	while (r--)
		free(p[r]);
	free(p);
	return (NULL);
}

static char	*ft_alloc_word(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	arr = malloc(sizeof(char *) * (ft_countw(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			arr[i] = ft_alloc_word(s, c);
			if (!arr[i])
				return (free_arr(arr, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
/*int	main(void)
{
	char **ptr;
	int i = 0;
	char *tab1 = "aaaaaaaaaaaaa";
	ptr = ft_split(tab1, 'a');
	if (ptr == NULL)
	{
		printf("%p", ptr);
		return (0);
	}
	while (i < ft_countw(tab1, ' '))
	{
		printf("%s\n", ptr[i]);
		i++;
	}
}*/