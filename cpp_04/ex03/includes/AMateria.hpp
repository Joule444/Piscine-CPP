/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:44:46 by jthuysba          #+#    #+#             */
/*   Updated: 2023/10/22 16:25:04 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
	#define AMATERIA_HPP

#include <iostream>
#include "color.h"

class AMateria
{
	protected:

		std::string	elemType;

	public:
	
		//Constr & Destr
		AMateria( void );
		~AMateria( void );
		AMateria( const AMateria & copy );
		AMateria( std::string const & type);
		
		//Operators Overload
		AMateria &operator=( const AMateria &rhs );

		//Members Functions
		std::string	const & getType( void ) const;
		// virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter & target);
};

#endif