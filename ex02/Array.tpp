/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:52:47 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 13:10:02 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
	arr = NULL;
}

template <typename T>
Array<T>::Array( const Array &array )
{
	this->_size = array.size();
	arr = new T[this->_size];
	for (unsigned int i = 0; i < _size; i++)
		this->arr[i] = array[i];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	arr = new T[this->_size];
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array& array )
{
	if (this->_size > 0)
		delete [] this->arr;
	this->size = array.size();
	arr = new T[this->_size];
	for (unsigned int i = 0; i < _size; i++)
		this->arr[i] = array[i];
}

template <typename T>
T	&Array<T>::operator[]( unsigned int pos ) const
{
	if (pos >= this->_size)
		throw std::out_of_range("Please introduce a valid position.");
	return (this->arr[pos]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}
