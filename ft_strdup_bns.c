/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:24:40 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/26 18:24:53 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_strdup(const char	*s1)
{
	char	*s2;
	int		i;
	char	*ns1;
	int		len;

	i = 0;
	ns1 = (char *)s1;
	len = strlen(ns1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	while (ns1[i])
	{
		s2[i] = ns1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
