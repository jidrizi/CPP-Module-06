/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:12:05 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 16:17:34 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer& source)
{
	std::cout << "Copy Serializer constructor called" << std::endl;
	(void) source;
}

Serializer&	Serializer::operator=(Serializer& source)
{
	std::cout << "Copy Serializer assignment operator called" << std::endl;
	(void) source;
	return (*this);
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t 	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}