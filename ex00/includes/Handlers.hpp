/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handlers.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:15:11 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 15:39:22 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_HPP
# define HANDLERS_HPP


# include <string>
# include <iostream>
# include <cctype>
# include <sstream>

void		printResult(char charLit, int intLit, float floatLit, 
							double doubleLit);
bool		edgeCaseCheck(int len, std::string litString);
void		handlePseudo(std::string litString);
void		handleChar(std::string litString);
void		handleInt(std::string litString);
void		handleFloat(std::string litString);
void		handleDouble(std::string litString);

#endif