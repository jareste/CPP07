/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:31:36 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 13:06:55 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T				*arr;
		unsigned int	_size;
	public:
		Array();
		Array( const Array &array );
		Array(unsigned int n);
		~Array();
		Array	&operator=( const Array& array );
		T	&operator[]( unsigned int pos ) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif
