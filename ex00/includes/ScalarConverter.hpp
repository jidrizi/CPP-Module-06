/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:01:48 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/29 18:10:35 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS 0
# endif

# ifndef EXIT_FAILURE
#  define EXIT_FAILURE 1
# endif

# include <string>
# include <iostream>
# include <cctype>
# include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter& source);
		ScalarConverter&	operator=(ScalarConverter& source);

	public:
		~ScalarConverter();

		static void			convert(std::string litString);
	};

// int						parseString(std::string litString);
// void						printResult(char charLit, int intLIt, float floatLit, doubel doubleLit);
void						handleChar(std::string litString);
void						handleInt(std::string litString);
void						handleDouble(std::string litString);

#endif