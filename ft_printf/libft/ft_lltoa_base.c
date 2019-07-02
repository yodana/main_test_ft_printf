/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:13:58 by chcoutur          #+#    #+#             */
/*   Updated: 2019/06/13 10:17:08 by chcoutur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <limits.h>

static	int	ft_get_len(long long nb, int base)
{
	if (nb < 0)
		return (1 + ft_get_len(-nb, base));
	else if (nb / base > 0)
		return (1 + ft_get_len(nb / base, base));
	else
		return (1);
}

char		*ft_lltoa_base(long long nb, int base)
{
	char	*str;
	size_t	len;
	int		pos;

	if (nb == LLONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	pos = 0;
	if (nb >= 0)
	{
		if (base == 10)
			pos = 1;
		nb = nb * (-1);
	}
	len = ft_get_len(-nb, base);
	if (!(str = ft_strnew(len + !pos)))
		return (NULL);
	while (len-- > 0)
	{
		*(str + len + !pos) =
			-(nb % base) + ((-(nb % base) > 9) ? 'A' - 10 : '0');
		nb /= base;
	}
	if (!pos && base == 10)
		*str = '-';
	return (str);
}
