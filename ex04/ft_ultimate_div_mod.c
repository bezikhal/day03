/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:09:02 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/12 15:57:20 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int     *i;
	int     *j;

	*i = *a;
	*a /= *b;
	*j = *b;
	*b = *i % *j;
}
