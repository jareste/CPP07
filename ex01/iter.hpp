/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:07:28 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 12:30:46 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, size_t	len, void (*f)(T&))
{
	size_t	i = -1;

	if (arr)
		while (++i < len)
			(*f)(arr[i]);
}

#endif
