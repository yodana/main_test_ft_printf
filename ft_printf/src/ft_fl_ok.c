/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fl_ok.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcoutur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:12:00 by chcoutur          #+#    #+#             */
/*   Updated: 2019/06/24 11:28:12 by chcoutur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_fl_ok(t_arg *arg, char *mantissa, t_floatbits *fl)
{
	char *tmp;

	if (arg->precision == -2)
		arg->precision = 1;
	else
		arg->precision = arg->precision == 0 ? 7 : arg->precision + 1;
	tmp = ft_mant(mantissa, arg, -1);
	free(mantissa);
	mantissa = tmp;
	arg->print = fl->bits.expo - 16383 < 0 ?
		ft_calc_real_neg(mantissa, (fl->bits.expo - 16383) * -1) :
		ft_calc_real_pos(mantissa, (fl->bits.expo - 16383));
	if (!(fl->bits.expo > 32766 || fl->bits.expo < 0))
		ft_check_round(arg);
	ft_sharpf(arg);
	ft_width_f(arg, fl->bits.sign);
	ft_space_float(arg, fl->bits.sign, 0);
	ft_sign_float(arg, fl->bits.sign);
	return (1);
}
