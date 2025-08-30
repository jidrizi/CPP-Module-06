/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:18:45 by jidrizi           #+#    #+#             */
/*   Updated: 2025/08/30 16:27:23 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		test;
	Data		*og;
	Data		*copy;
	uintptr_t	serializedCopy;

	test.junkValue = 42;
	og = &test;
	serializedCopy	= Serializer::serialize(og);
	copy = Serializer::deserialize(serializedCopy);

	std::cout << "\033[31mTake a look at the values\033[0m" << std::endl;
    std::cout << "Original pointer: " << og << std::endl;
    std::cout << "Serialized version: " << serializedCopy << std::endl;
    std::cout << "Copy pointer: " << copy << std::endl;

    if (og == copy)
        std::cout << "\033[31m\nThey are the same value!\033[0m" << std::endl;

    return (0);
}