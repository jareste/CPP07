/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:58:51 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/03 12:08:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	char a = 'a';
	char b = 'z';

	std::cout << "PREV::: " << a << " " << b << std::endl;
	swap(a, b);
	std::cout << "AFTER::: " << a << " " << b << std::endl;
	std::cout << "MIN::: " << min(a,b) << " " << std::endl;
	std::cout << "MAX::: " << max(b,a) << " " << std::endl;
}