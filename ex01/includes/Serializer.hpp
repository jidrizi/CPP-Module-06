/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:48:16 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 16:12:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer& source);
		Serializer&			operator=(Serializer& source);

	public:
		~Serializer();
		static uintptr_t 	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif