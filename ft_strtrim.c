/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:09:29 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/30 12:37:41 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *ptr, char c)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	str;
	size_t	end;

	str = 0;
	i = 0;
	while (s1[str] && ft_check(set, s1[str]))
		str++;
	end = ft_strlen(s1);
	while (end > str && ft_check(set, s1[end - 1]))
		end--;
	ptr = ft_calloc((end - str) + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (str < end)
	{
		ptr[i] = s1[str];
		i++;
		str++;
	}
	return (ptr);
}
/*int main()
{
	char ptr[]= " -- ---  anass  -- - -  ";
	printf("\n%s",ft_strtrim(ptr," -- "));
}*/
