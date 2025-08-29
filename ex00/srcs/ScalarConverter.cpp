/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:12:56 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/29 13:31:26 by jidrizi          ###   ########.fr       */
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

ScalarConverter&    ScalarConverter::operator=(ScalarConverter& source)
{
    std::cout << "ScalarConverter copy assignment operator called" << std::endl;
    (void)  source;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

void    ScalarConverter::convert(std::string litString)
{
    
}