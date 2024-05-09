/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:35:43 by alvargom          #+#    #+#             */
/*   Updated: 2024/03/20 11:15:59 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value * ((Value < 0) * (-1) + (Value > 0)))
#endif
