/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:58:18 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/29 18:18:05 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter::convert("");
    ScalarConverter::convert("e");
    ScalarConverter::convert("-42");
	ScalarConverter::convert("-42.67");
	ScalarConverter::convert("-69.420f");
	return (0);
}
