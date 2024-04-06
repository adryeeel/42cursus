/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_prefix_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:27:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/05 17:53:26 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_parse_prefix_i(t_flags flags, char **str, long *value)
{
	char	*join_str;

	if (!*str)
		return ;
	if (flags.plus && *value >= 0)
	{
		join_str = ft_strjoin(*str, "+");
		free(*str);
		*str = join_str;
	}
	else if ((!flags.zero || flags.dot) && (flags.plus || *value < 0))
	{
		join_str = ft_strjoin(*str, "-");
		free(*str);
		*str = join_str;
		*value = -(*value);
	}
	else if (flags.space && !flags.plus && *value >= 0)
	{
		join_str = ft_strjoin(*str, " ");
		free(*str);
		*str = join_str;
	}
}
