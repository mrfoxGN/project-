/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:36:38 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/24 14:19:52 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}
/*int	main(void)
{

	char b[] = "anass";
	printf("%s\n", ft_strchr(b, '0'));
	//printf("%s",strchr(b , 'e'));
	//printf("%p\n", ft_strchr(b, 'e'));
}*/
