/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_zero_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:46:25 by chcoutur          #+#    #+#             */
/*   Updated: 2019/06/13 11:57:52 by chcoutur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_sharp_x(t_arg *arg, char *str)
{
	ft_sharp(arg);
	if (ft_addflag(arg, LEFT_JUST))
		ft_memcpy(str, arg->old_print, arg->old_print_size);
	else
		ft_strlen(str) == 0 ? ft_memcpy(str, arg->old_print,
				arg->old_print_size) :
			ft_memcpy(str + ft_strlen(str) - arg->old_print_size,
					arg->old_print, arg->old_print_size);
}

int			ft_spec_zero_u(t_arg *arg)
{
	char *str;

	if (arg->min_width > 0)
	{
		if (!(str = ft_strnew(arg->min_width)))
			return (0);
		ft_memset(str, ' ', arg->min_width);
	}
	else
	{
		if (!(str = ft_strnew(2)))
			return (0);
		ft_memset(str, ' ', ft_strlen(str));
	}
	if (ft_addflag(arg, SHARP) && arg->arg_type == 'o')
		ft_sharp_x(arg, str);
	free(arg->print);
	arg->print = str;
	arg->print_size = ft_strlen(arg->print);
	return (1);
}
