/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 01:37:40 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/10 14:20:59 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long i;
	long long ll_nb;

	ll_nb = (long long)nb;
	if (ll_nb <= 0)
		return (0);
	i = 1;
	while (i * i <= ll_nb)
	{
		if (i * i == ll_nb)
			return (i);
		i += 1;
	}
	return (0);
}
