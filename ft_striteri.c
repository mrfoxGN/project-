/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:59:05 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/02 12:59:19 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void upper(unsigned int i , char *c)
{
   if(*c >= 'a' && *c <= 'z')
   {
    *c = '0';
   } 
}
int	main(void)
{
    char tab[] = "anass guednaiy";
    ft_striteri(tab,upper);
    printf("%s",tab);
}*/
