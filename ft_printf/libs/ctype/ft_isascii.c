/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:05:58 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/10 12:13:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a char is a 7-bit ascii.
 *
 * This function determines if a character 'c' is between 0 and 127
 * (both inclusive) that is the range of the 7-bit ascii characters.
 *
 * @param c (int) | The character to be compared.
 * @return 1 (true) or 0 (false).
 *
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
