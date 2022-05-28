/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:43:13 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 21:29:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static	char	*ft_checks2(char	*s2, char	*ns, int n)
{
	unsigned int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		ns[n] = s2[j];
		j++;
		n++;
	}
	ns[n] = '\0';
	return (ns);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ns;
	int		len;
	int		i;
	char	*ns1;
	char	*ns2;

	if (!s1 || !s2)
		return (NULL);
	ns1 = (char *)s1;
	ns2 = (char *)s2;
	len = (ft_strlen(ns1) + ft_strlen(ns2));
	ns = (char *)malloc(len * sizeof(char) + 1);
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (ns1[i] != '\0')
	{
		ns[i] = ns1[i];
		i++;
	}
	free(s1);
	return (ft_checks2(ns2, ns, i));
}
