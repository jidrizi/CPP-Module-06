/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:52:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/29 18:18:16 by jidrizi          ###   ########.fr       */
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
	std::cout << "{" << std::endl;
	if (litString.empty() == true)
	{
		std::cerr << "Error: String is empty." << std::endl
			<< "}" << std::endl;
		return ;
	}
	handleChar(litString);
	handleInt(litString);
	handleDouble(litString);
	std::cout << "}" << std::endl;
}

void	handleChar(std::string litString)
{
	char	charLit;
	int		intLit;
	float	floatLit;
	double	doubleLit;

	if (litString[1] || std::isalpha(litString[0]) == false)
		return ;
	charLit = litString[0];
	if (isprint(charLit))
		std :: cout << "char:" << charLit << std::endl;
	else
		std:: cout << "char: " << "Non displayable" << std::endl;
	intLit = static_cast<int>(charLit);
	std :: cout << "int:" << intLit << std::endl;
	floatLit = static_cast<float>(charLit);
	std :: cout << "float:" << floatLit << std::endl;
	doubleLit = static_cast<double>(charLit);
	std :: cout << "double:" << doubleLit << std::endl;
}

void	handleInt(std::string litString)
{
	long	limitTest;
	char	charLit;
	int		intLit;
	float	floatLit;
	double	doubleLit;

	for (int len = litString.length() - 1; len >= 0; len--)
	{
		if (len == 0 && litString[len] == '-')
			break ;
		if (std::isdigit(litString[len]) == false)
			return ;
	}
	std::stringstream(litString) >> limitTest;
	if (limitTest > 2147483647 || limitTest < -2147483648)
		return ;

	std::stringstream(litString) >> intLit;
	charLit = static_cast<char>(intLit);
	if (isprint(charLit))
		std :: cout << "char:" << charLit << std::endl;
	else
		std:: cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << intLit << std::endl;
	floatLit = static_cast<float>(intLit);
	std::cout << "float: " << floatLit << std::endl;
	doubleLit = static_cast<double>(intLit);
	std::cout << "double: " << doubleLit << std::endl;
}


void	handleFloat(std::string litString)
{
	char	charLit;
	int		intLit;
	float	floatLit;
	double	doubleLit;
	int		dot = 0;

	if (litString[litString.length() - 1] != 'f')
		return ;
	for (size_t len = litString.length() - 2; len != 0; len--)
	{
		else if (len != 0 && len != litString.length() - 2 
				&& litString[len] == '.')
			dot++;
		else if (std::isdigit(litString[len]) == false || dot > 1)
			return ;
		else if (len == 0 && litString[len] == '-')
			break ;
	}
	if (dot != 1)
		return ;
	
}


void	handleDouble(std::string litString)
{
	char	charLit;
	int		intLit;
	float	floatLit;
	double	doubleLit;
	int		dot = 0;

	for (size_t len = litString.length() - 1; len != 0; len--)
	{
		if (len != 0 && len != litString.length() - 1  
				&& litString[len] == '.')
			dot++;
		else if (std::isdigit(litString[len]) == false || dot > 1)
			return ;
		else if (len == 0 && litString[len] == '-')
			break ;
	}
	if (dot != 1)
		return ;

	std::stringstream(litString) >> doubleLit;
	charLit = static_cast<char>(doubleLit);
	if (isprint(charLit))
		std :: cout << "char:" << charLit << std::endl;
	else
		std:: cout << "char: " << "Non displayable" << std::endl;
	intLit = static_cast<int>(doubleLit);
	std::cout << "int: " << intLit << std::endl;
	floatLit = static_cast<float>(doubleLit);
	std::cout << "float: " << floatLit << std::endl;
	std::cout << "double: " << doubleLit << std::endl;
}
