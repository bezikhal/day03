/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:51:40 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/12 12:56:12 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int     *c;
	int     *d;

	*a = *c;
	*b = *d;
	*a = *d;
	*b = *c;
}
