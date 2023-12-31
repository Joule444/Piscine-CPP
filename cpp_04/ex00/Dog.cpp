/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:49:03 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/19 18:09:44 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

/* Members Functions */

void	Dog::makeSound( void ) const
{
	std::cout << "[" << CYAN << this->type << RESET
		<< "] : Waf !" << std::endl;
}

/* Operators Overload */

Dog & Dog::operator=(const Dog &rhs)
{
	this->type = rhs.getType();
	std::cout << "Dog copy operator called !" << std::endl;
	return (*this);
}

/* Constr & Destr */

Dog::Dog( const Dog &copy ): Animal(copy)
{
	this->type = copy.getType();
	std::cout << "Dog copy created !" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog " << RED << "destroyed "
		<< RESET << "!" << std::endl;
}

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog " << GREEN << "created "
		<< RESET << "!" << std::endl;
}