/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:11:21 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/24 13:27:45 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j]
			&& haystack[i + j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == 0)
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char b[]="anassguendoaui";
	char c[]= "assgue";
	printf("%s",ft_strnstr(b,c,6));
}*/
