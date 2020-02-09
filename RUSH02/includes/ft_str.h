/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 22:30:20 by seoh              #+#    #+#             */
/*   Updated: 2020/02/09 22:31:25 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

char	*ft_str_duplicate(char *src);
char	*ft_str_n_duplicate(char *src, int n);

char	*ft_str_copy(char *dest, char *src);
char	*ft_str_n_copy(char *dest, char *src, int n);

#endif
