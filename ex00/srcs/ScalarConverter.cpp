/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/29 14:01:06 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter& source)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)  source;
}

ScalarConverter&ScalarConverter::operator=(ScalarConverter& source)
{
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	(void)  source;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void	ScalarConverter::convert(std::string litString)
{
	if (litString.empty() == true)
	{
		std::cerr << "Error: String is empty." << std::endl;
		return ;
	}

	
}
