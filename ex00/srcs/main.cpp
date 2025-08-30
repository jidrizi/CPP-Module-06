/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:58:18 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 15:41:43 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	ScalarConverter::convert("0");
	ScalarConverter::convert("-42");
	ScalarConverter::convert("42");
	
	ScalarConverter::convert("0.0f");
	ScalarConverter::convert("4.2f");
	ScalarConverter::convert("-4.2f");
	
	ScalarConverter::convert("nanf");
	ScalarConverter::convert("-inff");
	ScalarConverter::convert("+inff");
	
	ScalarConverter::convert("nan");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("+inf");
	

	return (0);
}
