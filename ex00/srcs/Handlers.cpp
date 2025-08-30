/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handlers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:13:06 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 12:58:02 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handlers.hpp"

void	printResult(char charLit, int intLit, float floatLit, double doubleLit
						, bool dotlessVariable)
{
	if (isprint(charLit))
		std :: cout << "char:" << charLit << std::endl;
	else
		std:: cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << intLit << std::endl;
	if (dotlessVariable)
	{
		std::cout << "float: " << floatLit << ".0" << "f" << std::endl;
		std::cout << "double: " << doubleLit << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << floatLit << "0"<< "f" << std::endl;
		std::cout << "float: " << floatLit << "0" << std::endl;
	}
}

// void		handlePseudo(std::string litString)
// {
	
// }


void	handleChar(std::string litString)
{
	char	charLit;

	if (litString[1] || std::isalpha(litString[0]) == false)
		return ;
	charLit = litString[0];
	printResult(charLit, static_cast<int>(charLit), static_cast<float>(charLit)
					, static_cast<double>(charLit), true);
}

void	handleInt(std::string litString)
{
	long	limitTest;
	int		intLit;

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
	printResult(static_cast<char>(intLit), intLit, static_cast<float>(intLit)
					, static_cast<double>(intLit), true);
}


void	handleFloat(std::string litString)
{
	float	floatLit;
	bool	edgeCase = false;
	int		dot = 0;

	if (litString[litString.length() - 1] != 'f')
		return ;
	for (size_t len = litString.length() - 2; len != 0; len--)
	{
		if (len != 0 && len != litString.length() - 2 
				&& litString[len] == '.')
			dot++;
		else if (std::isdigit(litString[len]) == false || dot > 1)
			return ;
		else if (len == 0 && litString[len] == '-')
			break ;
	}
	if (dot != 1)
		return ;
	if (litString[litString.length() - 2] == '.' 
			&& litString[litString.length() - 1] == '0')
		edgeCase = true;

	litString.resize(litString.length() - 1);
	std::stringstream(litString) >> floatLit;
	printResult(static_cast<char>(floatLit), static_cast<int>(floatLit)
					, floatLit, static_cast<double>(floatLit), edgeCase);
}


void	handleDouble(std::string litString)
{
	double	doubleLit;
	bool	edgeCase = false;
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
	if (litString[litString.length() - 2] == '.' 
			&& litString[litString.length() - 1] == '0')
		edgeCase = true;

	std::stringstream(litString) >> doubleLit;
	printResult(static_cast<char>(doubleLit), static_cast<int>(doubleLit)
					, static_cast<float>(doubleLit), doubleLit, edgeCase);
}
