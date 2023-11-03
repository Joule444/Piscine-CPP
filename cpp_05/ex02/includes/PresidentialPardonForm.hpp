/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:13:21 by jthuysba          #+#    #+#             */
/*   Updated: 2023/11/03 15:41:43 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
	#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:
	
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &copy );
		PresidentialPardonForm( std::string target );
	
		PresidentialPardonForm &operator=( const PresidentialPardonForm &rhs );

		const std::string getTarget( void ) const;
		
	private:

		const std::string	_target;
};

// std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif