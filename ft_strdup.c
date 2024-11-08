/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:21:39 by anguenda          #+#    #+#             */
/*   Updated: 2024/10/24 22:45:52 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*chaine;
	int		a;
	int		i;

	i = 0;
	a = ft_strlen(s);
	chaine = (char *)malloc((a + 1) * sizeof(char));
	if (chaine == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		chaine[i] = s[i];
		i++;
	}
	chaine[i] = '\0';
	return (chaine);
}
/*int main()
{
	char b[] = "anass guendoaui";
   printf("%s",ft_strdup(b));	
}*/
