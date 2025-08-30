/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:58:18 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 12:21:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter::convert("");
    ScalarConverter::convert("e");
    ScalarConverter::convert("-42");
	ScalarConverter::convert("77.550f");
	ScalarConverter::convert("-42.67");
	return (0);
}
