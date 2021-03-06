/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:15:28 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/12 15:34:31 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int     a;
	int     b;
	char    c;

	a = 0;
	b = 0;
	while(str[a])
		a++;
	while(a - 1 > b)
	{
		c = str[a];
		str[a--] = str[b];
		str[b++] = c;
	}
	return(str);
}
