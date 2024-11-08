/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:29:56 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/01 23:17:40 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*char my_fun(unsigned int i,char c)
{
	if( i % 2 == 0 && c>= 'a' && c <= 'z')
	{
		c = '0';
	}
Ï	return(c);
}
int	main(void)
{
	char ptr[]="anass guendaoui";
	printf("%s",ft_strmapi(ptr,my_fun));
}*/
