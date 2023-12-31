/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:51:41 by jthuysba          #+#    #+#             */
/*   Updated: 2023/12/10 16:47:32 by jthuysba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"

int	main( void )
{
	Base	*foo = Base::generate();
	
	Base::identify(foo);
	Base::identify(*foo);
	
	delete (foo);
	
	return (0);
}