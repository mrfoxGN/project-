/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:29:22 by anguenda          #+#    #+#             */
/*   Updated: 2024/11/11 17:18:34 by anguenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

/*static int check(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if( str[i] == '\n')
        {
            return(i)
        }
        i++;
    }
    return(0);
}*/
static char *line(char *buffer)
{
    char *line;
    int i;

    i = 0;
    while(buffer[i] && buffer[i] != '\n')
    {
        i++;
    }
    line = ft_calloc(i + 1, sizeof(char));
    i = 0;
    while(buffer[i] && buffer[i] != '\n')
    {
        line[i] = buffer[i];
        i++;
    }
    if(buffer[i] != '\0' && buffer[i] == '\n')
    {
        line[i] = '\n';
    }
    return(line);
}
static char *left_line(char *buffer)
{
    char *left;
    int i;
    int j;
    i = 0;
    j = 0 ;
    while(buffer[i] && buffer[i] != '\n')
        i++;
    if(buffer[i] == 0)
    {
        return(NULL);
        free[buffer]
    }
    left = ft_calloc( ft_strlen(buffer) - i ,sizeof(char));
    while(buffer[i + 1])
    {
        left[j] = buffer[i + 1];
        i++;
        j++;
    }
    return(left);
}



char *get_next_line(int fd)
{

    static char *ptr;
    static char *p;
    size_t n;
    int i;
    char s;
    char *c = calloc(2 , sizeof(char));

    while((n = read(fd , c, 1)) > 0)
    {   
        //c[n] = 0 ;
        if(c[n - 1] == '\n')
            break;
        ptr = ft_strjoin(ptr,c);
    }
    free(c);
	ptr = ft_strjoin(ptr,"\n");
    p = ft_strdup(ptr);
    free(ptr);
    ptr = NULL;
    return(p);
 }
 int main()
{  
    /*int fd = open("ans.txt",O_RDONLY | O_CREAT , 0777);
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
     printf("%s",get_next_line(fd));
     printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));*/
    char t[]="anassguenda\n";
    //printf("%s\n\n",line(t));
    printf("%s",left_line(t));

}

