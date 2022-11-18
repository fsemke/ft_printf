/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:21:43 by fsemke            #+#    #+#             */
/*   Updated: 2022/02/04 11:02:03 by fsemke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_set_default(t_notes *notes)
{
	notes->print_len = 0;
	notes->width = 0;
	notes->precision = 0;
	notes->dot = 0;
	notes->zero = 0;
	notes->minus = 0;
	notes->plus = 0;
	notes->space = 0;
	notes->hash = 0;
}

void	ft_notesreset(t_notes *notes)
{
	notes->width = 0;
	notes->precision = 0;
	notes->dot = 0;
	notes->zero = 0;
	notes->minus = 0;
	notes->plus = 0;
	notes->space = 0;
	notes->hash = 0;
}
