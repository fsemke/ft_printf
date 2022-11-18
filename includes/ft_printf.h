/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:18:16 by fsemke            #+#    #+#             */
/*   Updated: 2022/03/21 15:48:27 by fsemke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h> //va_list
# include <unistd.h>
# include <stdlib.h> //free()

typedef struct s_notes
{
	va_list	args;
	int		print_len;
	int		minus;
	int		zero;
	int		width;
	int		dot;
	int		precision;
	int		plus;
	int		space;
	int		hash;
}	t_notes;

/**
 * @brief Write the String with the given Variables.
 * 
 * @param input Input-string
 * @param ... Variables
 * @return int Number of written character
 */
int			ft_printf(const char *input, ...);

// srcs/helpfunctions.c
int			ft_getnumber(const char *input, int *i);
int			check_specials(const char *input, int i, char compare, int *value);
int			fill_width(int str_len, int width, char fill_with);
char		*add_precision_int(char *str, int precision);
int			ft_num_length(unsigned long num, int dec_or_hex);

// srcs/struct.c
void		ft_set_default(t_notes *notes);
void		ft_notesreset(t_notes *notes);

// srcs/ft_cases.c

int			ft_special_format(const char *input, int i, t_notes *notes);
void		ft_types(const char *input, int *i, t_notes *notes);
int			ft_printstr(char *str, t_notes *notes);
int			ft_printchar(char c, t_notes *notes);
int			ft_printptr(unsigned long dec_address, t_notes *notes);

// srcs/ft_num.c
int			ft_printint(int n, t_notes *notes);
int			ft_printdec(unsigned int num, t_notes *notes);
int			ft_printdec_recursive(unsigned int num, int first);
int			ft_dec_prefix(int num_length, t_notes *notes);

// srcs/ft_hex.c
int			ft_printhex(unsigned long num, char x, t_notes *notes);
int			ft_printhex_recursive(unsigned long num, char x, int first);
int			ft_printhex_ptr(unsigned long num, char x, t_notes *notes);
int			ft_preprinthex(int num, int length, char x, t_notes *notes);
void		ft_printhashprefix(char x, t_notes *notes);

#endif