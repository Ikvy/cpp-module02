/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:04:33 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/21 14:34:20 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream> 
#include <cmath> 

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = f.getRawBits();
}

Fixed::Fixed(const int n)
{
	this->rawBits = n;
}

Fixed::Fixed(const float f)
{
	int	raw_bits;

	raw_bits = round(f * pow(10,this->bits_nbr));
	this->rawBits = raw_bits;
}

float Fixed::toFloat()

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

void	Fixed::operator=(Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawBits = f.getRawBits();
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
